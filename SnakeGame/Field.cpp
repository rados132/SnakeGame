#include "Field.h"

bool operator==(Field& lhs, Field& rhs)
{
    return (lhs._x == rhs._x && lhs._y == rhs._y);
}
