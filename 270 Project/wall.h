#pragma once
#include "obstacle.h"

class wall : public obstacle
{
public:
	void init(int x, int y, int w, int h);
	void draw();

	wall();
	~wall();
};

