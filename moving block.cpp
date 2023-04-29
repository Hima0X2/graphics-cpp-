#include<graphics.h>
#include<Windows.h>
using namespace std;
int main()
{
     initwindow(5000,5000);
    for(int i=100;i<=1000;i++){
         circle(i,250,50);
         Sleep(20);
         cleardevice();
          }
     Sleep(1000);
}
