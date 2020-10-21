#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int i,radius;
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   //Concentric circles
   setbkcolor(WHITE);
   radius=200;
   for (i=1;i<15;i++)
   {
	setcolor(i);
	circle(300,250,radius);
	radius-=15;
	delay(300);
   }

   /* clean up */
   getch();
   closegraph();
   return 0;
}