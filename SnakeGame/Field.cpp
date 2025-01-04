#include "Field.h"

Field::Field() : _x(0), _y(0)
{
}

Field::Field(int x, int y) : _x(x), _y(y)
{
}

int Field::getX() const
{
    return _x;
}

int Field::getY() const
{
    return _y;
}

void Field::setX(int x)
{
    _x = x;
}

void Field::setY(int y)
{
    _y = y;
}

bool operator==(Field& lhs, Field& rhs)
{
    return (lhs._x == rhs._x && lhs._y == rhs._y);
}
