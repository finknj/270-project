#pragma once
#include "obstacle.h"


namespace game {

	class coin : public obstacle
	{
	public:
		void init();
		void update();
		bool checkSpace();
		void draw();

		void resetCoin();

		ofVec2f getPosition();
		//constructor
		coin();
	};

}