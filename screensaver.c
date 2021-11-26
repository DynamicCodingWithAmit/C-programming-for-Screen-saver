#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main(){
int gd=DETECT,gm,col=480,row=640,,dir=2,s=8,c=15,f=4;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();
while(!kbit())
{
settextstyle(random(f),random(dir),random(s));
setcolor(random(c));
outtextxy(random(col),random(row),"Welcome to Dynamic coding with Amit");
delay(250);
}
getch();
closegraph();
}
