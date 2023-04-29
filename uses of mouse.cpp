#include<graphics.h>
#include<windows.h>
int main()
{
	initwindow(1000,1000);
	int x=100,y=100;
	POINT cursor;
	while(1){
		GetCursorPos(&cursor);
			circle(cursor.x,cursor.y,50);
			if(GetAsyncKeyState(VK_LBUTTON)){
				rectangle(cursor.x,cursor.y,cursor.x+20,cursor.y+20);
			}
			if(GetAsyncKeyState(VK_RETURN)){
			break;
		    }
			delay(50);
			cleardevice();
	}
	closegraph();
}
