#include "Cell.h"


Cell::Cell(int X, int Y)
{
	x = X;
	y = Y;
	r.set(7.0);
}

void Cell::update(float ft) //ft should be a scalar too
{
	float rf = r.length();
	ofCircle(x, y, rf);
	ofVec2f r1;
	r1.set(rf + ft);
	r.interpolate(r1, 0.01);
	//rf += 0.1;
	//r.set(rf);
}


Cell::~Cell()
{
}
