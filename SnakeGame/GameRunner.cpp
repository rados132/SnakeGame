#include "GameRunner.h"
#include <Windows.h>
#include <conio.h>
#include <iostream>

bool GameRunner::run()
{
	setup();
	loop();
	std::cout << '\n' << "Game Over!" << '\n';
	return false;
}

void GameRunner::setup()
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(out, &cursorInfo);

	fruit.generateNewFruit();
}

void GameRunner::loop()
{
	while (!gameOver)
	{
		draw();
		getInput();
		logic();
	}
}

void GameRunner::draw()
{
	Sleep(40);
	system("cls");
	using std::cout;
	for (int i = 0; i < width; i++)
		cout << '#';
	cout << ' ' << "Snake Game v1.0 © Rados Radovanovic 2024.";
	cout << '\n';
	for (int i = 1; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1)
				cout << '#';
			else if (snake.isSnakeField(j, i))
				cout << 'O';
			else if (fruit.isFruitField(j, i))
				cout << 'X';
			else
				cout << ' ';
		}
		cout << '\n';
	}
	for (int i = 0; i < width; i++)
		cout << '#';
	cout << '\n';
	cout << "Score: " << score;
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
	if (snake.headHitBody())
	{
		gameOver = true;
		return;
	}
	if (snake.getHead() == fruit)
	{
		snake.addToTail(fruit.getX(), fruit.getY());
		fruit.generateNewFruit();
		score++;
	}
}
