#pragma once
#include "ofVec2f.h"
#include "ofMain.h"

//removed base.h in order to seperate entities from obstacles 

namespace game {

	class obstacle
	{
	protected:
		int width;
		int height;

		ofVec2f pos;

		int green;
		int red;
		int blue;
		int size;


	public:
		void setColor(int r, int g, int b);

	};

}