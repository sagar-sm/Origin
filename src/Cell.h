#pragma once

#ifndef _OF_BALL
#define _OF_BALL


#include "ofMain.h"

class Cell
{
public:
	int x, y;
	ofVec2f r; //scalar
	Cell(int X, int Y);
	~Cell();

	void update(float ft);
};

#endif 
