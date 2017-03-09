#include "graphics.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>       
#include <thread>
#include "fonksiyonlar.h"

using namespace std;

int main()
{	
	Ana();

	initwindow(800, 650);
	
	int x = 0, y = 0;

		while (!ismouseclick(WM_LBUTTONDOWN))
		{
			outtextxy(250, 200, "...ZORLUK SEVÝYESÝ SEÇÝNÝZ...");
			readimagefile("3kolay.JPG", 150, 250, 250, 350);
			readimagefile("4orta.JPG", 300, 250, 400, 350);
			readimagefile("5zor.JPG", 450, 250, 550, 350);
		}
		
		while (ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, x, y);
			
			int z = mousex();
			int b = mousey();

			if (z > 150 && b > 250 && z < 250 && b < 350)
			{
				PlaySound(TEXT("11tus.wav"), NULL, SND_SYNC);
				
				thread first(kolayLabirent);
				thread second(sure);

				first.join();
				second.join();
			}
			if (z > 300 && b > 250 && z < 400 && b < 350)
			{
				PlaySound(TEXT("11tus.wav"), NULL, SND_SYNC);
				
				thread first(ortaLabirent);
				thread second(sure);

				first.join();
				second.join();
			}
			if (z > 450 && b > 250 && z < 550 && b < 350)
			{
				PlaySound(TEXT("11tus.wav"), NULL, SND_SYNC);

				thread first(zorLabirent);
				thread second(sure);

				first.join();
				second.join();
			}		
		}
		
		getchar();
		return 0;
	}
