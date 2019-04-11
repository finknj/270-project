#pragma once
#include "base.h"

class Enemy : public base
{
private:
	ofVec2f vel;
	
public:
	void init();
	void update();
	bool checkSpace;
	void draw();


	Enemy();
	~Enemy();
};

