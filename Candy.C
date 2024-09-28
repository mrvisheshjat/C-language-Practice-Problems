#include<stdio.h>
#include<conio.h>

int main()
{
	int candyX = 40, candyY = 2, boxX = 40, boxY = 22, score = 0, lifeline = 3, diff, candy;
	char ch;

	start:
	gotoxy(60,5);
	cprintf("score=%i",score);
	gotoxy(60,6);
	cprintf("lifeline=%d",lifeline);
	gotoxy(candyX,candyY);
	cprintf("0");
	gotoxy(boxX,boxY);
	cprintf("#");
	gotoxy(boxX+7,boxY);
	cprintf("#");
	gotoxy(boxX,boxY+1);
	cprintf("########");
	if(kbhit())
	{
		ch=getch();
		switch(ch)
		{
			case 'a':if (boxX>1)
			{
				boxX--;
			}
			break;

			case 'A':if (boxX>1)
			{
				boxX--;
			}
			break;

			case 'd':if (boxX<73)
			{
				boxX++;
			}
			break;

			case 'D':if (boxX<73)
			{
				boxX++;
			}
			break;
			case 'x': exit(0);
			case 'X': exit(0);
		}
	}
	candy++;
	if(candyY==22)
	{
		diff=candyX-boxX;
		if(diff>=1&&diff<=6)
		{
			score++;
		}
		else
		{
			lifeline --;
			{
				clrscr();
				gotoxy(40,13);
				cprintf("GAME OVER");
				exit(0);
			}
		}
		candyY=2;
		candyX=rand()%80+1;
	}
	delay(200);
	goto start;
}