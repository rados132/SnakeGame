#ifndef _wall_h_
#define _wall_h_

#include "field.h"

class Wall : public Field
{
private:
	FieldType type = WALL;
};

#endif // !_wall_h_
