#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main(){
    initwindow(800,600);
    delay(1000);
    line(300,300,200,200);delay(1000);
    line(200,200,300,100);delay(1000);
    line(300,100,441,100);delay(1000);
    line(441,100,541,200);delay(1000);
    line(541,200,441,300);delay(1000);
    line(441,300,300,300);delay(1000);
    int a[12]={300,300,200,200,300,100,441,100,541,200,441,300};
    setfillstyle(1,9);
    fillpoly(6,a);
    delay(1000);
    settextstyle(6,0,3); 
	outtextxy(330,190,"Khánh");
    getch();
    return 0;
}
