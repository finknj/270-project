#pragma once
#include "base.h"

class coin : public base
{
public:
	void init();
	void update();
	bool checkSpace();
	void draw();

	coin();
	~coin();
};

