// Use Turbo C++ editor otherwise it will not run

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{
	int  d = 0, m, x, y, i;
	initgraph(&d, &m, "c:\\TURBOC3\\BGI");
	x = getmaxx ()/2;
	y = getmaxx ()/2;

	for(i=30; i<200; i++)
	{
	delay(1000);
	setcolor(i/10);
	arc(x,y,0,180,i-1);
	}
}