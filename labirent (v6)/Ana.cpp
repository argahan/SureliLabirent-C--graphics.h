#include "graphics.h"

using namespace std;

void Ana(){
initwindow(500, 500);
readimagefile("1Ana.JPG", 0, 0, 500, 500);

for (int i = 5; i >= 0; i--)
{
	char a[5];

	sprintf(a, "%d", i);
	outtextxy(400, 400, a);
	delay(1000);
}

closegraph();


initwindow(500, 500);
readimagefile("2Kurallar.JPG", 0, 0, 500, 500);

for (int i = 5; i >= 0; i--)
{
	char a[5];

	sprintf(a, "%d", i);
	outtextxy(400, 400, a);
	delay(1000);
}

closegraph();
}