#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main(){
    int gd,gm;
    int x,y;
    int i,j;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    setcolor(15);
    line(0,400,640,400);
    rectangle(300,330,340,400);
    rectangle(310,320,330,330);
    setcolor(4);
    line(319,280,319,398);
    line(320,280,320,398);
    rectangle(320,280,330,300);
    
    for(j=400;j<640;j++){
    	cleardevice();
    	setcolor(15);
    	line(0,j,640,j);
    	rectangle(300,j-70,340,j);
    	rectangle(310,j-80,330,j-70);
    	setcolor(4);
    	line(319,280,319,400);
    	rectangle(320,280,320,400);
    	rectangle(310,280,330,300);
    	setcolor(14);
    	circle(325,300,2);
    	delay(1);
	}for(i=400;i>340;i--){
		cleardevice();
		setcolor(4);
		line(319,i,319,i-120);
		line(320,i,320,i-120);
		rectangle(320,i-120,330,i-100);
		setcolor(14);
		circle(325,i-100,2);
		delay(1);
	}cleardevice();
	
	for(int z=0;z<=3;z++){
		for(int a=0;a<250;a++){
			setlinestyle(1,2,5);
			setcolor(4);
			line (400, 450-a, 400, 460-a);
			line (300, 410-a, 300, 410-a);
			line (200, 450-a, 200, 460-a);
			setcolor(2);
			line (402, 455-a ,400, 450-a);
			line (302, 405-a ,300, 400-a);
			line (202, 455-a, 200, 450-a);
			delay(5);
			cleardevice();
		}setcolor(200);
		setfillstyle (1,200);
		fillellipse (401, 200, 10,10);
		fillellipse (301, 150, 10,10);
		fillellipse (201, 200, 10,10);
		delay(100);
		setlinestyle(1,2,2);
		for(int x=0;x<=180;x+=10){
			setcolor(14);
			arc(450, 200,170-x, 180-x, 60);
			arc(470,200,170-x, 180-x, 100);
			arc (490, 200, 170-x, 180-x, 86	);
			arc(510,200, 170-x, 180-x, 110);
			setcolor(2000);
			arc(350,200,0+x,10+x,60);
			arc(330,200,0+x,10+x,100);
			setcolor(5);
			arc(310,200,0+x,10+x,85);
			arc(290,200,0+x,10+x,110);
			setcolor(9);
			arc (350, 160, 170-x ,180-x, 60);
			arc (370, 160, 170-x,180-x, 70);
			setcolor(11);
 			arc (390, 160, 170-x ,180-x, 100);
			arc(410, 160, 170-x, 180-x, 110);
			setcolor(200);
 			arc(250, 150, 0+x, 10+x,50);
			arc (230, 150, 0+x, 10+x, 70);
			setcolor (12);
			arc(210, 160, 0+x, 10+x, 100);
			arc(190, 150, 0+x, 10+x, 110);
			setcolor(14);
			arc (260, 200, 170-x ,180-x, 60);
			arc(270, 200, 170-x, 180-x, 100) ;
			setcolor (1);
			arc(290, 200, 170-x, 180-x, 85);
			arc(310, 200, 170-x, 180-x, 110);
			setcolor(2000);
			arc(150,200, 0+x, 10+x, 60);
			arc(130, 200, 0+x, 10+x, 100);
			setcolor (3);
			arc(110, 200, 0+x, 10+x, 85);
			arc(90, 200, 0+x, 10+x,110);
			delay(100);
			cleardevice();


		}
	}
	getch();
}
