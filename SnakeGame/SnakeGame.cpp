#include "Snake.h"
#include <iostream>
#include <Windows.h>

using std::cout;

const int width = 40, height = 20;
const int sleepMillis = 10;

int main(int argc, char* argv[])
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);

	while (true)
	{
		system("cls");
		for (int i = 0; i < width; i++)
			cout << '#';
		cout << '\n';
		for (int i = 1; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (j == 0 || j == width - 1)
					cout << '#';
				else
					cout << ' ';
			}
			cout << '\n';
		}
		for (int i = 0; i < width; i++)
			cout << '#';
		Sleep(sleepMillis);
	}
}
