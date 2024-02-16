#ifndef _field_h_
#define _field_h_

enum FieldType { WALL, SNAKE, FRUIT };

class Field
{
public:
	Field(int x, int y)
		: _x(x), _y(y)
	{
	}

private:
	int _x, _y;
};

#endif // !_field_h_
