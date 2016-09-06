#ifndef cpp_gameloop00_h
#define cpp_gameloop00_h

#include <stdlib.h>

void processInput();
void update();
void update(double elapsed);
void render();
void render(double elapsed);

double getCurrentTime();
void sleep(double time);

const int FPS = 60;
const int MS_PER_FRAME = 1000 / FPS;
const int MS_PER_TICK = 1000 / FPS;

#endif//cpp_gameloop00_h