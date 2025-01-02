#ifndef _gamerunner_h_
#define _gamerunner_h_

#include "Snake.h"
#include "Fruit.h"
#include <Windows.h>

extern const int width, height;

class GameRunner
{
public:
	bool run();

protected:
	void setup();
	void loop();
	void draw();
	void getInput();
	void logic();

private:
	Snake snake;
	Fruit fruit;
	bool gameOver = false;
};

#endif // !_gamerunner_h_
