// Fill out your copyright notice in the Description page of Project Settings.


#include "ChooseNextWayPoint.h"
#include "PatrolRoute.h" 
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"


EBTNodeResult::Type UChooseNextWayPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	
	//Get the patrol route
	auto ControlledPawn = OwnerComp.GetAIOwner()->GetPawn();
	auto PatrolRoute = ControlledPawn->FindComponentByClass<UPatrolRoute>();

	//protect against no patrol component
	if (!ensure(PatrolRoute)) { return EBTNodeResult::Failed; }

	//Warn about empty patrol routes
	auto PatrolPoints = PatrolRoute->GetPatrolPoints();
	// Protect against empty patrol routes
	if (PatrolPoints.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Guard is missing patrol points"));
		return EBTNodeResult::Failed;
	}
		

	//Set Next Way Points
	auto BlackBoardComp = OwnerComp.GetBlackboardComponent();
	auto Index = BlackBoardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	BlackBoardComp->SetValueAsObject(WayPointKey.SelectedKeyName, PatrolPoints[Index]);

	//Cycle the index
	auto NextIndex = (Index + 1)% PatrolPoints.Num();
	BlackBoardComp->SetValueAsInt(IndexKey.SelectedKeyName,NextIndex);

	//UE_LOG(LogTemp, Warning, TEXT("AI IN C++ At Index: %i"), Index);
	return EBTNodeResult::Succeeded;

}
