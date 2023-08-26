#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void boundaryfill4(int x, int y, int fill, int boundary);

void main()
{
    int driver = DETECT, gmode;

    initgraph(&driver, &gmode, "C:\\TURBOC3\\BGI");

    setcolor(4);

    rectangle(200, 200, 240, 240);
    boundaryfill4(100, 100, 5, 4);

    getch();
    closegraph();
}

void boundaryfill4(int x, int y, int fill, int boundary)
{
    int c;

    c = getpixel(x, y);

    if ((c != boundary) && (c != fill))
    {
        putpixel(x, y, fill);
        boundaryfill4(x + 1, y, fill, boundary);
        boundaryfill4(x - 1, y, fill, boundary);
        boundaryfill4(x, y + 1, fill, boundary);
        boundaryfill4(x, y - 1, fill, boundary);
    }
}
