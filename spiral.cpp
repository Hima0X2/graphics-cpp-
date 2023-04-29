#include<graphics.h>
#include<windows.h>
#include<stdlib.h>
#include<dos.h>
int main()
{
     //spiral create
    initwindow(5000,5000);
    int i=0.1,j=0;
    int x=getmaxx()/2;
    int y=getmaxy()/2;
    while(true){
          setcolor(BLUE);
          i=i+0.1;
    arc(x,y,1+j,2+j,i);
    j++;
    delay(10);
    }
    Sleep(1000);
}
