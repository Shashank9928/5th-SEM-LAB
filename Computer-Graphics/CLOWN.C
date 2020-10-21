#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
   //Requisite Variables
   int tri[8]={265,115,335,115,300,75,265,115};
   //Initiate Graphics mode
   int gdriver = DETECT, gmode, errorcode;
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
   //Design of clown
   setbkcolor(CYAN);
   setcolor(RED);
   //Hat
   drawpoly(4, tri);
   setfillstyle(SOLID_FILL,RED);
   fillpoly(4, tri);
   //Face
   setcolor(GREEN);
   circle(300,150,35);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(300,150,GREEN);
   //Nose
   setcolor(RED);
   ellipse(300,150,0,360,3,8);
   setfillstyle(SOLID_FILL,RED);
   floodfill(300,150,RED);
   //Ears
   setcolor(MAGENTA);
   circle(346,150,10);
   setfillstyle(SOLID_FILL,MAGENTA);
   floodfill(346,150,MAGENTA);
   circle(254,150,10);
   floodfill(254,150,MAGENTA);
   //Eyes
   setcolor(BLUE);
   circle(280,140,5);
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(280,140,BLUE);
   circle(320,140,5);
   floodfill(320,140,BLUE);
   //Mouth
   setcolor(GREEN);
   arc(300,150,220,320,20);
   //Torso
   setcolor(BLUE);
   ellipse(300,260,0,360,35,75);
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(300,260,BLUE);
   //hands
   setcolor(YELLOW);
   ellipse(365,215,0,360,35,15);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(365,215,YELLOW);
   ellipse(235,215,0,360,35,15);
   floodfill(235,215,YELLOW);
   //Legs
   setcolor(BROWN);
   ellipse(280,370,0,360,15,45);
   setfillstyle(SOLID_FILL,BROWN);
   floodfill(280,370,BROWN);
   ellipse(320,370,0,360,15,45);
   floodfill(320,370,BROWN);
   /* clean up */
   getch();
   closegraph();
   return 0;
}