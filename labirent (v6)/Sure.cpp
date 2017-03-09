#include "graphics.h"

void sure(){

	for (int i = 5; i >= 0; i--)
	{
		char a[100];

		sprintf(a, "%d", i);
		outtextxy(650, 280, "SURE");
		outtextxy(680, 300, a);
		delay(1000);

		if (i == 0)
			bar(100, 100, 600, 600);
	}

}