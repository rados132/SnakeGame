#include "GameRunner.h"
#include <iostream>

const int width = 40, height = 20;

int main()
{
	while (true)
	{
		GameRunner gameRunner;
		gameRunner.run();
		std::cout << "Do you want to play again? (y/n): ";
		char answer;
		std::cin >> answer;
		if (answer != 'y')
			break;
	}
}
