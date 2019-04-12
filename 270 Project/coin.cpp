#include "coin.h"

using namespace game;

void coin::init() {
	setColor(244, 232, 104);
	// size for coin is actually a radius but hey who really feels like adding another variable
	size = 15;

	pos.x = ofRandom(ofGetWidth() - 2 * size) - size;
	pos.y = ofRandom(ofGetHeight() - 2 * size) - size;

/*	while (checkSpace == false) {
		pos.x = ofRandom(ofGetWidth() - 2 * size) - size;
		pos.y = ofRandom(ofGetHeight() - 2 * size) - size;
	}*/
}

void coin::update() {

}

bool coin::checkSpace() {
	return true;
}

void coin::draw() {
	ofSetColor(red, green, blue);
	ofFill();
	ofDrawCircle(pos.x, pos.y, size);
}

