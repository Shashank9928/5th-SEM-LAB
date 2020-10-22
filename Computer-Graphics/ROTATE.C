//Program to Rotate a line
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
# define pi 3.14
int main()
{
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
	//Input Coordinates
	int x1,y1,x2,y2,x3,y3,x4,y4,ang;
	float rad;
	printf("Enter the starting coordinate (x1,y1): ");
	scanf("%d %d",&x1,&y1);
	printf("Enter the ending coordinate (x2,y2): ");
	scanf("%d %d",&x2,&y2);
	printf("Enter the rotating angle: ");
	scanf("%d",&ang);
	rad = (pi * ang)/180;
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
	line(x1,y1,x2,y2);
	setcolor(RED);
	outtextxy(x1+5,y1-5,"x1,y1");
	outtextxy(x2+5,y2+5,"x2,y2");
	setcolor(BLUE);
	getch();
	cleardevice();
	x3 = (x1 * cos(rad)) - (y1 * sin(rad));
	y3 = (x1 * cos(rad)) + (y1 * sin(rad));
	x4 = (x2 * cos(rad)) - (y2 * sin(rad));
	y4 = (x2 * cos(rad)) - (y2 * sin(rad));
	outtextxy(250,15,"Line after scaling");
	line(x3,y3,x4,y4);
	setcolor(BLUE);
	outtextxy(x3+5,y3-5,"x3,y3");
	outtextxy(x4+5,y4+5,"x4,y4");
	//Clean up
	getch();
	closegraph();
	return 0;
}