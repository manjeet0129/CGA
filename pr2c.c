#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main() {
    int gd = DETECT, gm;
    int midx, midy;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    circle(midx, midy, 50);
    outtextxy(300, 300, "CIRCLE");

    getch();
    closegraph();
}
