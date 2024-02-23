#include "Snake.h"
#include <iostream>
#include <Windows.h>

Snake::Snake()
{
    head = tail = new Node(width / 2, height / 2);
    snakeLength++;
    addToTail(width / 2, height / 2 + 1);
}

Snake& Snake::addToTail(int x, int y)
{
    tail = new Node(x, y, tail);
    snakeLength++;
    return *this;
}

bool Snake::isSnakeField(int x, int y)
{
    for (Node* tmp = tail; tmp != nullptr; tmp = tmp->next)
    {
        if (tmp->field.getX() == x && tmp->field.getY() == y)
            return true;
    }
    return false;
}

void Snake::draw()
{
    using std::cout;
    system("cls");
    for (int i = 1; i < height - 1; i++)
    {
        for (int j = 1; j < width - 1; j++)
        {
            if (isSnakeField(j, i))
            {
                cout << 'O';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}

void Snake::setDirection(Direction newDirection)
{
    head->field.setDirection(newDirection);
}

void Snake::moveSnake()
{
    head->field.moveField();
    for (Node* current = tail; current != head; current = current->next)
    {
        current->field.moveField();
        current->field.setDirection(current->next->field.getDirection());
    }
}
