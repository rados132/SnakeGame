#ifndef _fruit_h_
#define _fruit_h_

#include "Field.h"
#include <cstdlib>

extern int width, height;

class Fruit : public Field
{
public:
	Fruit() : Field(rand() % width, rand() % height)
	{
	}

private:
	FieldType type = FRUIT;
};

#endif // !_fruit_h_
