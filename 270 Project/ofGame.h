#pragma once
#include "ofMain.h"
#include "Player.h"
#include "coin.h"

namespace game{

class ofGame : public ofBaseApp
{
public:
	
	void setup(); //called once when the app runs
	void update(); //called before every frame is drawn
	void draw(); //draws the next frame

	// Handles key strokes
	void keyPressed(int key);
	void keyReleased(int key);

	void distanceTo();

private:
	float previousTime;
	Player* player;
	coin* Coin;
	

};

}