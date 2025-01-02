#ifndef _fruit_h_
#define _fruit_h_

#include "Field.h"
#include <cstdlib>

extern const int width, height;

class Fruit : public Field
{
public:
	void generateNewFruit()
	{
		_x = rand() % (width - 1);
		_y = rand() % (height - 1);
		if (_x == 0) _x++;
		if (_y == 0) _y++;
	}

	bool isFruitField(int x, int y) const
	{
		return x == _x && y == _y;
	}
};

#endif // !_fruit_h_
