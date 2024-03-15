#ifndef _field_h_
#define _field_h_

class Field
{
public:
	Field(int x, int y)
		: _x(x), _y(y)
	{
	}

	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);

	friend bool operator==(Field& lhs, Field& rhs);

private:
	int _x, _y;
};

#endif // !_field_h_
