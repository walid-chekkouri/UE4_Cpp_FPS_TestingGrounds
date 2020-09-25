# FPS Hunger Games TestingGrounds

**About**
 A Hunger-Games inspired FPS with large outdoor terrains. Advanced AI, basic networking, skeletal meshes, checkpoints and more. Game made after taking this course: (ref: TG_URC) http://gdev.tv/urcgithub

![Screenshot1](https://user-images.githubusercontent.com/11277981/94264993-a67d5980-ff2f-11ea-9831-48871e09ca83.PNG)

**Features:**
Advanced AI: (Using Behavior Trees, Decorators, Services, Perception(Hearing & Seeing) ,Tasks, Parallel Tasks, Blackboards, Dynamically calculating NavMesheVolumes and EQS)
![image](https://user-images.githubusercontent.com/11277981/94266168-a5e5c280-ff31-11ea-80cd-f4c4a3eb9e4d.png)

AnimationBP: (Locomotion, Aiming, Shooting, Using BlendSpaces, Creating Animation States, IK for holding the Gun, Notify events, Montages )
![image](https://user-images.githubusercontent.com/11277981/94266401-02e17880-ff32-11ea-915c-208f7e2752f5.png)

![image](https://user-images.githubusercontent.com/11277981/94266320-e1808c80-ff31-11ea-8a99-01e98bdf0bfd.png)
![image](https://user-images.githubusercontent.com/11277981/94266374-f9581080-ff31-11ea-928f-b6ba27fa2653.png)

Git: Using LFS for large assets
Garbage Collection for procedural generation of tiles
Spawning actors only in free spaces

**Design Patterns followed:**
Flyweight Design Pattern: When using Hierarchical Instanced Static Meshes
Pool Design Pattern: For creating and using navMeshVolumes

UE4 Version used: 4.22.3

