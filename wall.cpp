#include "wall.h"

using namespace game;

void wall::draw(int wallNumber) {
	ofSetColor(red, green, blue);
	ofFill();
	ofDrawRectangle((barriers.at(wallNumber)).x, (barriers.at(wallNumber)).y, (barriers.at(wallNumber)).w, (barriers.at(wallNumber)).h);
}


void wall::initWall(int x, int y, int w, int h) {
	int size = 60;

	barrier newWall;
	newWall.x = x * size;
	newWall.y = y * size;
	newWall.w = w * size;
	newWall.h = h * size;
	barriers.push_back(newWall);

	numWalls++;

}

wall::wall() {
	initWall(2, 4, 2, 1);
	initWall(9, 0, 1, 6); //continue this for every wall we want to build
	initWall(19, 0, 1, 4);
	initWall(28, 7, 4, 1);
	initWall(20, 8, 4, 1);
	initWall(14, 10, 1, 5);
	initWall(10, 12, 4, 1);
	initWall(5, 14, 1, 4);
	initWall(20, 12, 4, 1);
	initWall(28, 14, 1, 1);
}


