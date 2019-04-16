#pragma once
#include "obstacle.h"
#include <vector>

namespace game {

	class wall : public obstacle

	{
	public:
		void draw(int wallNumber);

		void initWall(int x, int y, int w, int h);
		
		//constructor
		wall();
		
		struct barrier {
			int x;
			int y;
			int w;
			int h;
		};

		typedef struct barrier barrier;
		vector<barrier> barriers;
		int numWalls = 0;
	private:
		int red = 120;
		int blue = 120;
		int green = 120;

	};
}

