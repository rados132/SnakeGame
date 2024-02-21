#ifndef _snakefield_h_
#define _snakefield_h_

#include "Field.h"

enum Direction { STOP = 0, UP, DOWN, LEFT, RIGHT };

class SnakeField : public Field
{
public:
	SnakeField(int x, int y, Direction direction = STOP)
		: Field(x, y), _direction(direction)
	{
	}

	void setDirection(Direction newDirection);
	void moveField();

private:
	FieldType type = SNAKE;
	Direction _direction;
};

#endif // !_snakefield_h_
