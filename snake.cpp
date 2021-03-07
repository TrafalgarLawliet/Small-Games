#include <iostream>
#include <graphics>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\MinGW\lib");
    rectangle(10, 10, 10, 150);
    getch();
    closegraph();
    return 0;
}