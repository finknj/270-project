#include "wall.h"

void wall::init(int x, int y, int w, int h) {
	setColor(192, 192, 192);
	size = 64;

	// w and h are in chunks of 64 bits on the screen
	width = w * size;
	height = h * size;

	pos.x = x;
	pos.y = y;
}

void wall::draw() {
	ofSetColor(red, green, blue);
	ofFill();
	ofDrawRectangle(pos.x, pos.y, width, height);

}
wall::wall()
{
}


wall::~wall()
{
}
