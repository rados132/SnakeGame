#include "GameRunner.h"

const int width = 40, height = 20;

int main()
{
	GameRunner gameRunner = GameRunner();
	while (gameRunner.run());
}
