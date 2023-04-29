#include<graphics.h>
#include<windows.h>
int main()
{
	initwindow(1000,1000);
	int x=100,y=100;
	POINT cursor;
	while(1){
		GetCursorPos(&cursor);
		    if(GetAsyncKeyState(VK_LBUTTON)){
		   bar(cursor.x,cursor.y,cursor.x+10,cursor.y+10);
			delay(2);	
			}
	}
	closegraph();
}
