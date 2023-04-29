// C program to create a smiley face
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

// Driver Code
int main()
{

	// Initialize graphic driver
	int gr = DETECT, gm;

	// Initialize graphics mode by passing
	// three arguments to initgraph function

	// &gdriver is the address of gdriver
	// variable, &gmode is the address of
	// gmode and "C:\\Turboc3\\BGI" is the
	// directory path where BGI files
	// are stored
	initgraph(&gr, &gm, "C:\\Turboc3\\BGI");

	// Set color of smiley to yellow
	setcolor(YELLOW);

	// creating circle and fill it with
	// yellow color using floodfill.
	circle(300, 100, 40);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(300, 100, YELLOW);

	// Set color of background to black
	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);

	// Use fill ellipse for creating eyes
	fillellipse(310, 85, 2, 6);
	fillellipse(290, 85, 2, 6);

	// Use ellipse for creating mouth
	ellipse(300, 100, 205, 335, 20, 9);
	ellipse(300, 100, 205, 335, 20, 10);
	ellipse(300, 100, 205, 335, 20, 11);

	getch();

	// closegraph function closes the
	// graphics mode and deallocates
	// all memory allocated by
	// graphics system
	closegraph();

	return 0;
}

