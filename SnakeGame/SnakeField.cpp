#include "SnakeField.h"

extern const int width, height;

Direction SnakeField::getDirection()
{
	return _direction;
}

void SnakeField::setDirection(Direction newDirection)
{
	_direction = newDirection;
}

void SnakeField::moveField()
{
	switch (_direction)
	{
	case STOP:
		break;
	case UP:
		getY() -= 1;
		break;
	case DOWN:
		getY() += 1;
		break;
	case LEFT:
		getX() -= 1;
		break;
	case RIGHT:
		getX() += 1;
		break;
	default:
		break;
	}

	if (getX() == 0 || getX() == width)
	{
		getX() = (getX() <= 0 ? width - 1 : 1);
	}
	if (getY() == 0 || getY() == height)
	{
		getY() = (getY() <= 0 ? height - 1 : 1);
	}
}
