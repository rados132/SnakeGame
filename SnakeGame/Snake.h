#ifndef _snake_h_
#define _snake_h_

#include "SnakeField.h"

class Snake
{
public:
	Snake()
	{

	}
	~Snake();

protected:
	const Snake& addToTail(const SnakeField& field);

private:
	struct Node
	{
		Node(const SnakeField& field)
			: field(field)
		{
		}
		SnakeField field;
		Node* next = nullptr;
	};
	Node* head = nullptr;
	Node* tail = nullptr;
	int snakeLength = 0;
};

#endif // !_snake_h_
