#include "Snake.h"
#include <iostream>
#include <Windows.h>

Snake::Snake()
{
    addToTail(width / 2, height / 2);
    addToTail(width / 2, height / 2 + 1);
}

Snake& Snake::addToTail(int x, int y)
{
    tail = (head ? tail->next : head) = new Node(x, y);
    snakeLength++;
    return *this;
}

Field& Snake::getHead()
{
	return head->field;
}

bool Snake::isSnakeField(int x, int y)
{
    for (Node* tmp = head; tmp != nullptr; tmp = tmp->next)
    {
        if (tmp->field.getX() == x && tmp->field.getY() == y)
            return true;
    }
    return false;
}

bool Snake::headHitBody()
{
	for (Node* tmp = head->next; tmp != nullptr; tmp = tmp->next)
	{
		if (head->field == tmp->field)
			return true;
	}
    return false;
}

void Snake::setDirection(Direction newDirection)
{
    head->field.setDirection(newDirection);
}

void Snake::moveSnake()
{
    if (head->field.getDirection() == STOP) return;
    int prevX = head->field.getX();
    int prevY = head->field.getY();
    head->field.moveField();
    for (Node* current = head->next; current != nullptr; current = current->next)
    {
        int tmpX = current->field.getX();
        int tmpY = current->field.getY();
        current->field.setX(prevX);
        current->field.setY(prevY);
        prevX = tmpX;
        prevY = tmpY;
    }
}
