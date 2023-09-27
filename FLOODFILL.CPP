#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void floodFill(int,int,int,int);

void main()
{
int gm,gd=DETECT;

initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(50,50,250,250);
floodFill(55,55,10,0);
getch();
}



void floodFill(int x,int y,int f_color,int default_color)
{
if(getpixel(x,y) == default_color)
{
delay(5);
putpixel(x,y,f_color);
floodFill(x+1,y,f_color,default_color);
floodFill(x-1,y,f_color,default_color);
floodFill(x,y+1,f_color,default_color);
floodFill(x,y-1,f_color,default_color);
}
}
