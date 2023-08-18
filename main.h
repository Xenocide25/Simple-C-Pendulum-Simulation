#ifndef MAIN_H
#define MAIN_H

#define DISPLAY_WIDTH 720.0
#define DISPLAY_HEIGHT 1600.0
#define pendulumLength 400.0
#define pendulumRad 30.0
#define gravitationalAcceleration 9.80667
#define rho 1.225
#define dt 0.1

#define Kp 0.9
#define Ki 0.01
#define Kd 0.08

FILE *file;
void DrawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius);

#endif