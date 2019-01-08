#pragma once
#include <iostream>
using namespace std;
class Position2D
{
private:
	int mX, mY;

public:
	Position2D(const int& x = 0, const int& y = 0)
		:mX(x), mY(y)
	{
	}
	Position2D getPosition() { return Position2D(mX, mY); };
	int getPositionX() { return mX; };
	int getPositionY() { return mY; };

	void setPosition(int x, int y) { mX = x; mY = y; };
	friend ostream& operator << (ostream& out, const Position2D& pos)
	{
		out << pos.mX << " " << pos.mY;
		return out;
	}

	friend Position2D operator + (Position2D pos1, Position2D pos2)
	{
		return Position2D(pos1.mX + pos2.mX, pos1.mY + pos2.mY);
	}

};