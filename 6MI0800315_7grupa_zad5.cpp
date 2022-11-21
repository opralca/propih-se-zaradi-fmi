#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>
#include "MMSystem.h"


#define MAX 1024

void DrawAnimation(int spaces) {
	for (int i = 0; i < spaces; i++)
		std::cout << ' ';
}

void DrawBus(int n) {

	int index = -1;
	int devetchetiriCounter = -1;
	bool hold = false;
	int n = 0;
	int values[MAX];

	for (int i = 0; i < n; i++)
		values[i] = i;

	for (int i = 0; i < n; i++)
	{
		int spaceCounter = values[i];
		//tavana
		DrawAnimation(spaceCounter);
		for (int j = 0; j < 25; j++)
			std::cout << '_';


		//nadolu (pod tavana)

		std::cout << "\n";
		DrawAnimation(spaceCounter);
		std::cout << "|   |     |     |    | |  \\ \n";

		DrawAnimation(spaceCounter);
		std::cout << "|___|_____|_____|_94_|_|___\\ \n";

		DrawAnimation(spaceCounter);
		std::cout << "|                    | |    \\ \n";

		DrawAnimation(spaceCounter);
		std::cout << "`--(o)(o)--------------(o)--'";


		//tova e izvrashtenie na liricheskiq govoritel no pomislih che e zabavno pls ne se syrdete


		std::string devetchetiri[3] =
		{ "Dai da se skriq tuk",
		"vyv tozi avtobus",
		"vyv devet 4etiri, tuk sa vsi4ki ve4eri" };

		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";


		if (index % 4 == 0) 
		{
			hold = true;
			if (devetchetiriCounter != 2)
				devetchetiriCounter++;
		}
		if (hold) 
		{

			if (n != 3) 
			{

				DrawAnimation(spaceCounter);
				std::cout << devetchetiri[devetchetiriCounter];
			}
			else if (devetchetiriCounter == 2)
			{
				DrawAnimation(spaceCounter);
				std::cout << devetchetiri[devetchetiriCounter];
			}
			else 
			{
				n = 0;
				hold = false;
			}
		}

		index++;

		Sleep(370);

		system("CLS");
	}
}


int main() {

	PlaySound(TEXT("94pesen.wav"), NULL, SND_ASYNC);

	Sleep(500);

	// za optimalno izpylnenie na pesenta zadavam vhod 16 :)
	DrawBus(16);


	return 0;
}

//tozi kod e pisan v netrezvo systoqnie na uma