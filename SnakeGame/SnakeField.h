#ifndef _snakefield_h_
#define _snakefield_h_

#include "Field.h"

enum Direction { UP = 0, DOWN, LEFT, RIGHT };

class SnakeField : public Field
{
public:
	SnakeField(int x, int y, Direction direction)
		: Field(x, y), _direction(direction)
	{
	}

private:
	FieldType type = SNAKE;
	Direction _direction;
};

#endif // !_snakefield_h_
