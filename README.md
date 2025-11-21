# Under The Sea - Computer Graphics Final Project

A 3D underwater simulation featuring boid-based fish behavior, implemented in C++ with OpenGL.

## Project Overview

This project simulates an underwater environment where fish exhibit flocking behavior using the boids algorithm. Fish swim naturally through the scene, avoiding collisions and moving together in as a school following the users guided object.

**Group Members:** Charles Mowbray, Phil Stanton, Ethan Beckett

**Boids Algorithm Reference:** https://github.com/beneater/boids/blob/master/boids.js

## Features

- **Boid-based Fish Simulation**: Fish exhibit realistic flocking behavior with:
  - Separation: Avoid crowding neighbors
  - Alignment: Steer towards average heading of neighbors
  - Cohesion: Steer towards average position of neighbors
- **Third-Person Camera**: Navigate through the underwater scene
- **Texture Mapping**: Textures for fish, water, and environment
- **Skybox**: Immersive underwater skybox
- **Lighting**: Dynamic lighting with Phong shading
- **Collision Detection**: Fish avoid obstacles and boundaries

## Prerequisites

### Linux (Ubuntu/Debian)
```bash
sudo apt-get update
sudo apt-get install build-essential cmake libglfw3-dev libglew-dev libx11-dev
```

### Windows (MinGW)
Ensure you have MinGW installed and libraries available at `Z:/CSCI441/`

## Building the Project

```bash

# Create build directory and compile
mkdir build
cd build
cmake ..
make

# Run from project root (important for asset loading)
cd ..
./build/lab11
```

## Controls

| Key/Input | Action |
|-----------|--------|
| `W` | Move forward |
| `A` | Move left |
| `S` | Move backward |
| `D` | Move right |
| `Space` | Move up |
| `Left Shift` | Move down |
| Mouse | Look around |
| `ESC` | Exit application |

## Project Structure

```
graphicsFinal/
├── main.cpp                 # Entry point
├── FPEngine.cpp/h          # Main engine implementation
├── Sunfish.cpp/h           # Fish/boid implementation
├── assets/
│   ├── textures/           # Texture files
│   │   ├── water.PNG
│   │   ├── sunfishSkin.png
│   │   └── bcp.png
│   └── skybox/             # Skybox textures
├── shaders/                # GLSL shader files
├── CMakeLists.txt          # Build configuration
└── README.md
```

## Technical Details

### Libraries Used
- **OpenGL 4.1+**: Graphics rendering
- **GLFW3**: Window management and input handling
- **GLEW**: OpenGL extension loading
- **GLM**: Mathematics library for graphics
- **stb_image**: Texture loading
- **CSCI441**: Custom graphics library (provided by course)

### Shader Programs
- **Texture Shader**: Basic textured rendering
- **Wavy Shader**: Animated water surface with lighting

### Boids Algorithm
Each fish (boid) follows three simple rules:
1. **Separation**: Steer to avoid crowding local flockmates
2. **Alignment**: Steer towards the average heading of local flockmates
3. **Cohesion**: Steer to move toward the average position of local flockmates

## Future Enhancements

- [ ] Add more fish species with different behaviors
- [ ] Add particle effects (bubbles, water effects)
- [ ] Add sound effects and ambient audio

## Acknowledgments

- Reference implementation: https://github.com/beneater/boids
- Course materials from CSCI441

This project was created for educational purposes as part of a the Colorado School of Mines Computer graphics course.
