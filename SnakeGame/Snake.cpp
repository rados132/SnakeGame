#include "Snake.h"

const Snake& Snake::addToTail(const SnakeField& field)
{
    tail = (head ? tail->next : head) = new Node(field);
    snakeLength++;
    return *this;
}
