
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
    int gd = DETECT, gm;
    int midx, midy;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    line(1, midy, 640, midy);
    line(midx, 1, midx, 640);

    circle(150, 130, 50);
    outtextxy(130, 200, "CIRCLE");

    rectangle(400, 90, 500, 170);
    outtextxy(420, 200, "RECTANGLE");

    ellipse(450, 320, 0, 360, 50, 40);
    outtextxy(425, 375, "ELLIPSE");

    arc(150, 350, 0, 120, 50);
    outtextxy(140, 380, "ARC");

    getch();
    closegraph();
}
