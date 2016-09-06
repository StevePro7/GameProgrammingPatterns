#ifndef cpp_doublebuffer00_h
#define cpp_doublebuffer00_h

#include <iostream>

#define WHITE 0
#define BLACK 1

class FrameBuffer
{
public:
    FrameBuffer();
    void clear();
    void draw(int x, int y);
    const char* getPixels();

private:
    static const int WIDTH = 160;
    static const int HEIGHT = 120;
    char pixels[WIDTH * HEIGHT];
};

#endif//cpp_doublebuffer00_h