#pragma once
#include "ofVec2f.h"
#include "ofMain.h"


namespace game {

	class base
	{

	public:
		void setColor(int r, int g, int b);

		// Update physics method
		virtual void update(float timeNow, float timeBefore) {};

		// Drawing method
		virtual void draw(float timeNow, float timeBefore) {};

		// Getter and setters					//Getters and Setters copied and pasted in hopes it would make things work..it didnt but now im too afraid to delete them
		void setPosition(ofVec2f position);
		ofVec2f getPosition();
		void setVelocity(ofVec2f velocity);
		ofVec2f getVelocity();

	protected:
		ofVec2f pos;
		ofVec2f velocity;
		ofVec2f acceleration;

		int green;
		int red;
		int blue;
		int size;

	};

}