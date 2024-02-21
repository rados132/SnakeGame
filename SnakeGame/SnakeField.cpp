#include "SnakeField.h"

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
		getY() += 1;
		break;
	case DOWN:
		getY() -= 1;
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
}
