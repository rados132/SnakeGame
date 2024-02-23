#ifndef _fruit_h_
#define _fruit_h_

#include "Field.h"
#include <cstdlib>

extern const int width, height;

class Fruit : public Field
{
public:
	Fruit() : Field(rand() % (width - 1), rand() % (height - 1))
	{
	}
};

#endif // !_fruit_h_
