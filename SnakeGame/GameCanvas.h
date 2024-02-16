#ifndef _gamecanvas_h_
#define _gamecanvas_h_

class GameCanvas
{
public:
	GameCanvas(int width = 32, int height = 32)
		: _width(width), _height(height)
	{
	}

private:
	int _width, _height;
};

#endif // !_gamecanvas_h_
