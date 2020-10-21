#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
int main()
{
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
	//Input Coordinates
	int x1,y1,x2,y2,dx,dy,p,x,y,i;
	printf("Enter the starting coordinate (x1,y1): ");
	scanf("%d %d",&x1,&y1);
	printf("Enter the ending coordinate (x2,y2): ");
	scanf("%d %d",&x2,&y2);
	/* initialize graphics and local variables */
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	/* read result of initialization */
	errorcode = graphresult();
	if (errorcode != grOk)  /* an error occurred */
	{
		printf("Graphics error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to halt:");
		getch();
		exit(1); /* terminate with an error code */
	}
	//Bresenham Line drawing algorithm
	setbkcolor(WHITE);
	dx=x2-x1;
	dy=y2-y1;
	x=x1;
	y=y1;
	p=(2*dy)-dx;
	while(x<x2)
	{
		if (p>=0)
		{
			putpixel(x,y,RED);
			delay(25);
			y=y+1;
			p=p+(2*dy)-(2*dx);
		}
		else
		{
			putpixel(x,y,RED);
			delay(25);
			p=p+(2*dy);
		}
		x=x+1;
	}
	setcolor(RED);
	outtextxy(300,35,"BRESENHAM ALGORITHM");
	outtextxy(x1+5,y1-5,"x1,y1");
	outtextxy(x2+5,y2+5,"x2,y2");
	//Clean up
	getch();
	closegraph();
	return 0;
}