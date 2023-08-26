#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void boundaryfill(int x,int y,int f_color,int b_color)
{
if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
{
putpixel(x,y,f_color);
boundaryfill(x+1,y,f_color,b_color);
boundaryfill(x,y+1,f_color,b_color);
boundaryfill(x-1,y,f_color,b_color);
boundaryfill(x,y-1,f_color,b_color);
}
}
//getpixel(x,y) gives the color of specified pixel

void main()
{
int gm,gd=DETECT,radius;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(100,100,50,50);
boundaryfill(55,55,10,15);
delay(5);
getch();

closegraph();
}