# Simple C Pendulum Simulation

This repository contains a C program that simulates a pendulum's movement with extra features like PID control, air drag, and a visual representation using the SDL2 library.

## What's Inside?

### Features

- **Realistic Pendulum Movement:** Watch the pendulum swing naturally, taking into account gravity, where it starts, air resistance, and controlled by PID.
- **Adjustable Options:** Change things like how long the pendulum is, where it starts, and the PID settings to see how those changes affect its movement.
- **SDL2 Visuals:** I added a graphical simulation of pendulum using SDL2 Library.
- **PID Control:** Explore how a PID controller can help keep the pendulum moving smoothly.
- **Air Drag:** I've taken air resistance into account, so you'll see the pendulum's behavior closer to reality.
- **Logging:** Record data's such as *x* and *y* pendulum movements and other data's.

### How to Use

1. **Clone the Repository:** Get the code onto your computer by copying this repository (`git clone https://github.com/your-username/simple-c-pendulum-simulation.git`).
2. **Open Terminal:** Launch your terminal and navigate to the repository folder (`cd simple-c-pendulum`).
3. **Compile and Run:** Use the Clang compiler to turn `main.c` into a program (`clang main.c -o pendulum -lSDL2`). Then, start the simulation (`./pendulum`).
4. **Follow On-Screen Steps:** The program will guide you through the setup, and you'll be able to see the pendulum simulation. The simulation details will be saved in the `log.txt` file.

### What You Need

- **Clang Compiler:** You'll need a compiler to turn the code into a working program.
- **SDL2 Library:** To see the visual representation, you'll need the SDL2 library.
- **Cxxdroid (I use Cxxdroid to made this):** If you're running this on your Android device, you can use Cxxdroid to run the program.

### License

This project is licensed under the [MIT License](LICENSE).

---
