#ifndef _snake_h_
#define _snake_h_

#include "SnakeField.h"

extern const int width, height;

class Snake
{
public:
	Snake();
	//~Snake();
	
	void setDirection(Direction newDirection);
	void moveSnake();
	bool isSnakeField(int x, int y);
	bool headHitBody();
	Snake& addToTail(int x, int y);
	Field& getHead();

private:
	struct Node
	{
		Node(int x, int y, Node* next = nullptr)
			: field(x, y), next(next)
		{
		}
		SnakeField field;
		Node* next;
	};
	Node* head = nullptr;
	Node* tail = nullptr;
	int snakeLength = 0;
};

#endif // !_snake_h_
