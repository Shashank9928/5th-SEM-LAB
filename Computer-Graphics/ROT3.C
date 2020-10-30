//Program to Rotate a line
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#define pi 22/7
#define degtorad pi/180
int main()
{
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
	//Input Coordinates
	int i,x1,y1,x2,y2,ang;
	float x,y;
	printf("Enter the starting Coordinate(x1,y1): ");
	scanf("%d %d",&x1,&y1);
	printf("Enter the ending Coordinate(x2,y2): ");
	scanf("%d %d",&x2,&y2);
	printf("Enter the angle by which line is to be rotated: ");
	scanf("%d",&ang);
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
	//Translation code
	setbkcolor(WHITE);
	setcolor(GREEN);
	cleardevice();
	outtextxy(300,25,"Input line");
	line(x1,y1,x2,y2);
	setcolor(RED);
	outtextxy(x1+5,y1-5,"x1,y1");
	outtextxy(x2+5,y2+5,"x2,y2");
	getch();
	cleardevice();
	outtextxy(250,15,"Line after rotating");
	setcolor(RED);
	line(x1,y1,x2,y2);
	setcolor(WHITE);
	ang = 360 - ang;
	for (i=4;i<=ang;i+=1)
	{
		// d=75 i=angle
		x=x1+(75*cos(((float)i*3.14)/180));
		y=y1+(75*sin(((float)i*3.14)/180));
		line(x1,y1,x,y);
	}
	setcolor(BLUE);
	line(x1,y1,x,y);
	//Clean up
	getch();
	closegraph();
	return 0;
}