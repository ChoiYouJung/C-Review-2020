#ifndef POINT_H
#define POINT_H

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	void show() { cout << '(' << x << ',' << y << ')' << endl; }
};
#endif 
