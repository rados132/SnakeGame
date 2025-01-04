#ifndef _field_h_
#define _field_h_

class Field
{
public:
	Field();
	Field(int x, int y);

	int getX() const;
	int getY() const;

	void setX(int x);
	void setY(int y);

	friend bool operator==(Field& lhs, Field& rhs);

protected:
	int _x, _y;
};

#endif // !_field_h_
