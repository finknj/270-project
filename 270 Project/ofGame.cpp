#include "ofGame.h"
#include "GameConfig.h"
using namespace game;

// General configuration
int GameConfig::FRAME_RATE = 60;
int GameConfig::COINS_COLLECTED = 0;

// Player configurations
float GameConfig::PLAYER_INITIAL_ACCEL = 1000.0f;
float GameConfig::PLAYER_INITIAL_SPEED = 500.0f;
	
	void ofGame::setup() {
		ofSetBackgroundColor(0, 0, 0);
		previousTime = 0.0f;

		ofSetFrameRate(GameConfig::FRAME_RATE);

		player = new Player();

		Coin = new coin();
	}
	
	void ofGame::update() {
		float currentTime = ofGetElapsedTimef();

		//distanceTo();

		player->update(currentTime, previousTime);

		previousTime = currentTime;
	}

	void ofGame::draw() {
		float currentTime = ofGetElapsedTimef();

		player->draw(currentTime, previousTime);

		Coin->draw();

		ofDrawBitmapString("Score: " + ofToString(GameConfig::COINS_COLLECTED), 1500, 50);
	}



	void ofGame::keyPressed(int key) {
		switch (key) {
		case OF_KEY_RIGHT:
			player->handleMovementKeyPressed(Player::RIGHT);
			break;
		case OF_KEY_LEFT:
			player->handleMovementKeyPressed(Player::LEFT);
			break;
		case OF_KEY_UP:
			player->handleMovementKeyPressed(Player::UP);
			break;
		case OF_KEY_DOWN:
			player->handleMovementKeyPressed(Player::DOWN);
			break;
		}
	}

	void ofGame::keyReleased(int key) {
		switch (key) {
		case OF_KEY_RIGHT:
			player->handleMovementKeyReleased(Player::RIGHT);
			break;
		case OF_KEY_LEFT:
			player->handleMovementKeyReleased(Player::LEFT);
			break;
		case OF_KEY_UP:
			player->handleMovementKeyReleased(Player::UP);
			break;
		case OF_KEY_DOWN:
			player->handleMovementKeyReleased(Player::DOWN);
			break;
		}
	}

	void distanceTo() {
		


		//printf(" %g, %g", p1.x, p1.y);

	}