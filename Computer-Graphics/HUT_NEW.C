#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int x,y;
   int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

   x=getmaxx();
   y=getmaxy();
   line(x/4,y/4,(5*x)/8,y/4);
   line((5*x)/8,y/4,(5*x)/8,(7*y)/8);
   line((5*x)/8,(7*y)/8,x/8,(7*y)/8);
   line((3*x)/8,(7*y)/8,(3*x)/8,y/2);
   line(x/8,(7*y)/8,x/8,y/2);
   line(x/8,y/2,(5*x)/8,y/2);
   line(x/8,y/2,x/4,y/4);
   line((3*x)/8,y/2,x/4,y/4);
   getch();
   closegraph();
   return 0;
}