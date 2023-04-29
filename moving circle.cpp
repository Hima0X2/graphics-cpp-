#include<graphics.h>
#include<windows.h>
int main()
{
	initwindow(GetSystemMetrics(SM_CXSCREEN),GetSystemMetrics(SM_CYSCREEN),"NAME");
	int x=100,y=100;
	while(1){
			cleardevice();
		circle(x,y,50);
		if(GetAsyncKeyState(VK_RIGHT)){
			x=x+10;
		}
		else if(GetAsyncKeyState(VK_LEFT)){
			x=x-10;
		}
		else if(GetAsyncKeyState(VK_UP)){
			y=y-10;
		}
		else if(GetAsyncKeyState(VK_DOWN)){
			y=y+10;
		}
		else if(GetAsyncKeyState(VK_RETURN)){ ///Press Enter
			break;
		}
		delay(10);
	}
	closegraph();
}
