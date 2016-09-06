#include "DoubleBuffer00.h"

FrameBuffer::FrameBuffer()
{
    clear();
}

void FrameBuffer::clear()
{
    for (int i = 0; i < WIDTH * HEIGHT; ++i)
    {
        pixels[i] = WHITE;
    }
}

void FrameBuffer::draw(int x, int y)
{
    pixels[(WIDTH * y) + x] = BLACK;
}

const char* FrameBuffer::getPixels()
{
    return pixels;
}