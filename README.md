# kta (kill them all)

`kta` is a top-down survivor-style game built in **C++** using the **SFML** library. This project is a dedicated learning exercise focused on game development fundamentals, high-performance architecture, and C++ systems design.

---

## 🎮 Project Overview
Inspired by games like *Magic Survival*, `kta` challenges the player to survive against waves of enemies using automated magical abilities. The primary goal of this project is to implement a functional "Survivor-like" core from scratch.

* **Genre:** Horde Survival / Roguelite
* **Engine/Framework:** SFML (Simple and Fast Multimedia Library)
* **Architecture:** ECS (Entity Component System)
* **Development Goal:** Focus on clean logic, data-oriented design, and learning the C++ game loop.

---

## 🏗️ Technical Architecture: ECS
To handle the high entity counts typical of the genre, this project utilizes an **Entity Component System (ECS)**. This approach separates data from logic to improve performance and maintainability:

* **Entities:** Unique identifiers representing game objects (Player, Enemies, XP Gems).
* **Components:** Pure data structures (e.g., `Position`, `Velocity`, `Health`, `SpriteComponent`).
* **Systems:** Logic-heavy functions that process groups of entities (e.g., `MovementSystem`, `CollisionSystem`, `RenderSystem`).

> **Note:** To maintain project integrity during the learning process, all original field and method names are preserved as initially defined.

---

## 🚀 Learning Milestones
1.  **Phase 1: Foundation:** Setup SFML window, create the ECS manager, and render a player-controlled entity.
2.  **Phase 2: Enemy Swarms:** Implement automated enemy spawning and "Seeker" AI (enemies moving toward the player).
3.  **Phase 3: Combat Basics:** Implement simple collision detection and "Magic" entities (projectiles) that destroy enemies.
4.  **Phase 4: Polish & Loop:** Add a score counter, basic game-over state, and clean up memory management.

---

## 🛠️ Build Instructions
### Prerequisites
* **Visual Studio 2022** (or compatible MSVC compiler).
* **SFML 3.0** configured in your project include/library paths.

### Steps
1.  Clone the repository.
2.  Open `kta.slnx` or `kta.vcxproj` in Visual Studio.
3.  Ensure the SFML is present in your system and link however you wish, there are many methods such as global inclusion, or locally by dragging SFML directly into your folder.
   * **Note:** I have SFML installed in a library path in my main :C folder, and configured to be included in the project in Visual Studio.
5.  Build and run using **F5** (Debug) or **Ctrl+F5** (Release).

---

## 📁 Project Structure
* `kta.cpp`: Main entry point and system orchestrator.
* `.gitignore`: Optimized for Visual Studio (ignores `.vs/`, `Build/`, and binary artifacts).
* `kta.slnx`: Visual Studio solution file.
