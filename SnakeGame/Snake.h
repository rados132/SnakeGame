#ifndef _snake_h_
#define _snake_h_

#include "Field.h"

class Snake
{
private:
	struct Node
	{
		Node(Field& field, Node* next = nullptr)
			: snakeField(&field), next(next)
		{
		}
		Field* snakeField;
		Node* next;
	};
	Node* head = nullptr;
	Node* tail = nullptr;
	int snakeLength = 2;
};

#endif // !_snake_h_
