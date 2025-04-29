#include<graphics.h>
#include<conio.h>
#include<dos.h>
 int main(){
 int gd=DETECT,gm;
 int x,r;
 initgraph(&gd,&gm,"c:\\Turboc3\\BGI");  //initializing graphics
 //getting x,y coordinates
 int maxx=getmaxx();
 int maxy=getmaxy();
 //drawing a rectangles
 for(x=0;x<=maxx;x=x+10){
     bar(0,0,maxx,350);
     setfillstyle(SOLID_FILL,RED);
     bar(10+x,205,300+x,305);
     setfillstyle(SOLID_FILL,BROWN);
     bar(30+x,195,240+x,205);
     setfillstyle(SOLID_FILL,LIGHTGRAY);
     bar(30+x,220,230+x,255);
     setfillstyle(SOLID_FILL,LIGHTGRAY);
     bar(250+x,220,280+x,255);
     setcolor(BLACK);
     rectangle(0,345,maxx,350);


//Hills
    setcolor(BROWN);
    moveto(0,170);
    lineto(60,40);
    lineto(170,132);
    lineto(240,60);
    lineto(290,110);
    lineto(350,60);
    lineto(420,140);
    lineto(490,50);
    lineto(639,170);

// TO CREATE RAINBOW
 for(r=20;r<=82;r++){
    arc(170,132,46,139,20+r);
    setcolor(r/10);
 }
// SUN
    setcolor(RED);
    circle(600,40,22);
    circle(600,40,24);
 for(r=0;r<=20;r++){
    setcolor(YELLOW);
    circle(600,40,0+r);
 }
 //mirror line
    setcolor(BLACK);
    line(70+x,220,70+x,255);
    line(110+x,220,110+x,255);
    line(160+x,220,160+x,255);
    line(200+x,220,200+x,255);
    line(10+x,280,300+x,280);
 //Wheels
    setcolor(BLACK);
    circle(90+x,325,20);
    circle(258+x,325,20);
    circle(90+x,325,10);
    circle(258+x,325,10);
    circle(90+x,325,2);
    circle(258+x,325,2);
    circle(260+x,245,9);
 //Front mirror and headlight
    setcolor(BLACK);
    ellipse(300+x,235,270,90,3,25);
    setcolor(9);
    ellipse(300+x,290,279,90,3,5);

  delay(300);
 }
 getch();
 closegraph();
 return 0;
 }