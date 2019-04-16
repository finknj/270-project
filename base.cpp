#include "base.h"
#include "GameConfig.h"

using namespace game;

void base::setPosition(ofVec2f position) {
	this->pos = position;
}



void base::setVelocity(ofVec2f velocity) {
	this->velocity = velocity;
}

ofVec2f base::getVelocity() {
	return velocity;
}

void base::setColor(int r, int g, int b) {
	red = r;
	green = g;
	blue = b;
}

