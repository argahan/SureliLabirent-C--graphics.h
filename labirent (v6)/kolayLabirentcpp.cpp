#include "graphics.h"

using namespace std;

void kolayLabirent(){
	initwindow(800, 650, "Süreli Labirent");
	int sayac = 0;
	char sayi[3];
	int engellenenKoo[100][100];

	settextstyle(4, 0, 2);
	outtextxy(250, 30, "SURELÝ LABÝRENT");
	settextstyle(1, 0, 1);
	outtextxy(610, 115, "<-- Baslangýç");
	outtextxy(10, 550, "BÝTÝS");
	outtextxy(20, 580, "-->");
	//***************************************************************************************************
	int labirent[10][10] = {
		{ '1', '0', '0', '0', '1', '0', '0', '0', '1', '0' },
		{ '1', '0', '1', '0', '1', '0', '1', '0', '1', '0' },
		{ '1', '0', '1', '0', '1', '0', '1', '0', '1', '0' },
		{ '1', '0', '1', '0', '1', '0', '1', '0', '1', '0' },
		{ '1', '0', '1', '0', '1', '0', '1', '0', '1', '0' },
		{ '1', '0', '1', '0', '1', '0', '1', '0', '1', '0' },
		{ '1', '0', '1', '0', '1', '0', '1', '0', '1', '0' },
		{ '1', '0', '1', '0', '1', '0', '1', '0', '1', '0' },
		{ '1', '0', '1', '0', '1', '0', '1', '0', '1', '0' },
		{ '0', '0', '1', '0', '0', '0', '1', '0', '0', '0' }, };

	int x1 = 100;
	int y1 = 100;
	int x2 = 150;
	int y2 = 150;
	int b = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (labirent[i][j] == '1')
			{
				bar(x1, y1, x2, y2);
				engellenenKoo[b][0] = x1 + 25;
				engellenenKoo[b][1] = y1 + 25;
				b++;
				x1 = x1 + 50;
				x2 = x2 + 50;

			}
			if (labirent[i][j] == '0')
			{
				rectangle(x1, y1, x2, y2);
				x1 = x1 + 50;
				x2 = x2 + 50;
			}
		}
		x1 = 100;
		x2 = 150;
		y1 = y1 + 50;
		y2 = y2 + 50;
	}

	//***************************************************************************************************

	int x = 575, y = 125;
	int ek = 50;
	char tus;

	for (int i = 1; i <= 20; i++){
		setcolor(RED);
		circle(x, y, i);
	}

	while (1){
		tus = getch();

		if (tus == 27)
			exit(0);

		else if (tus == 114){
			closegraph();
			kolayLabirent();

		}
		else
		{
			for (int i = 1; i <= 20; i++)
			{
				setcolor(BLACK);
				circle(x, y, i);
			}

			if (tus == 77)
			{
				x += ek;
			}
			else if (tus == 75)
			{
				x -= ek;
			}

			else if (tus == 72)
			{
				y -= ek;
			}
			else if (tus == 80)
			{
				y += ek;
			}
			for (int i = 1; i <= 20; i++)
			{
				setcolor(RED);
				circle(x, y, i);
			}

			for (int i = 0; i < 100; i++)
			{
				if (x == engellenenKoo[i][0] && y == engellenenKoo[i][1])
				{
					readimagefile("6Engel.JPG", 100, 100, 600, 600);
					PlaySound(TEXT("9bitti.wav"), NULL, SND_SYNC);
					system("pause");
				}
			}

			if (x < 100 || x>600 || y < 100 || y>600)
			{
				readimagefile("7Dýs.JPG", 100, 100, 600, 600);
				PlaySound(TEXT("9bitti.wav"), NULL, SND_SYNC);
				system("pause");
			}

			if (x == 125 && y == 575)
			{
				readimagefile("8Bitis.JPG", 100, 100, 600, 600);
				PlaySound(TEXT("10tebrikler.wav"), NULL, SND_SYNC);
				system("pause");
			}
		}
	}

}