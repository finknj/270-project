#pragma once
#include "base.h"

namespace game {
	class Enemy : public base
	{
	private:
		ofVec2f vel;

	public:
		void init();
		void update();
		bool checkSpace;
		void draw();



	};

}