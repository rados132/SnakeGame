#include "GameRunner.h"
#include <iostream>
#include <conio.h>

bool GameRunner::run()
{
	GameRunner::setup();
	GameRunner::loop();
	return false;
}

void GameRunner::setup()
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(out, &cursorInfo);
}

void GameRunner::loop()
{
	while (true)
	{
		draw();
		getInput();
		logic();
	}
}

void GameRunner::draw()
{
	// popraviti ispis zidova
	using std::cout;
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
	Sleep(10);
	snake.draw();
	Sleep(10);
}

void GameRunner::getInput()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'w':
			snake.setDirection(UP);
			break;
		case 's':
			snake.setDirection(DOWN);
			break;
		case 'a':
			snake.setDirection(LEFT);
			break;
		case 'd':
			snake.setDirection(RIGHT);
			break;
		default:
			break;
		}
	}
}

void GameRunner::logic()
{
	snake.moveSnake();
}
