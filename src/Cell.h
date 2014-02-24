#pragma once

#ifndef _OF_BALL // if this class hasn't been defined, the program can define it
#define _OF_BALL // by using this if statement you prevent the class to be called more 

// than once which would confuse the compiler

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
