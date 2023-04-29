// C program to print
// message as colored characters
#include <iostream>
#include<graphics.h>
#include<windows.h>
using namespace std;

// function for printing
// message as colored character
// driver program
int main()
{
	// auto detection
	int i;
     initwindow(700,700);
     while(1){
	for (i=2; i<=7; i++)
	{
		// setcolor of cursor
		setcolor(i);
		// set text style as
		// settextstyle(font_style, orientation, font_size)
		//oreantation should be 0 and 1
		settextstyle(i+2,0,i);

		// print text at coordinate x,y;
		//void outtextxy(int x, int y, char *string);x,y=position

//where, x, y are coordinates of
//the point and, third argument contains
//the address of string to be displayed.
		outtextxy(10*i*2.5,20*i*2.5,"Eid Mubarak");
		delay(500);
		//Sleep(1000);
		 cleardevice();
		//system("cls"); eita cmd te use hoy GUI e na
	}
}
	delay(500);
}
