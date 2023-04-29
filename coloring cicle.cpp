#include<graphics.h>
#include<Windows.h>
int main()
{
     //line create
    initwindow(700,700);
    setfillstyle(SOLID_FILL,GREEN);
    //circle create
    circle(550,550,50);
   floodfill(550,550,WHITE);
    //setcolor(RED);
    //rectangle create
     setfillstyle(BKSLASH_FILL,BLUE);
    rectangle (200,200,300,300);
    floodfill(210,210,WHITE);
//triangle create
setfillstyle(BKSLASH_FILL,YELLOW);
    line(450, 450, 150,450);
    // line for x1, y1, x2, y2
    line(450, 450, 300, 300);

    // line for x1, y1, x2, y2
    line(150, 450, 300, 300);
    floodfill(210,210,WHITE);
    Sleep(5000);
     //1st line
}

