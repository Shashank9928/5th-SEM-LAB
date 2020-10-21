#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
int main()
{
	int x,y,x_mid,y_mid,radius,dp;
	int gdriver = DETECT, gmode, errorcode;
	clrscr();
	printf("*********** MID POINT Circle drawing algorithm ********\n\n");
	printf("\nenter the coordinates= ");
	scanf("%d %d",&x_mid,&y_mid);
	printf("\n now enter the radius =");
	scanf("%d",&radius);
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
	x=0;
	y=radius;
	dp=1-radius;
	do
	{
		putpixel(x_mid+x,y_mid+y,YELLOW);
		delay(25);
		putpixel(x_mid+y,y_mid+x,YELLOW);
		delay(25);
		putpixel(x_mid-y,y_mid+x,YELLOW);
		delay(25);
		putpixel(x_mid-x,y_mid+y,YELLOW);
		delay(25);
		putpixel(x_mid-x,y_mid-y,YELLOW);
		delay(25);
		putpixel(x_mid-y,y_mid-x,YELLOW);
		delay(25);
		putpixel(x_mid+y,y_mid-x,YELLOW);
		delay(25);
		putpixel(x_mid+x,y_mid-y,YELLOW);
		if(dp<0)
			dp+=(2*x)+1;
		else
		{
			y=y-1;
			dp+=(2*x)-(2*y)+1;
		}
		x=x+1;
	}while(y>x);
	getch();
	closegraph();
	return 0;
}