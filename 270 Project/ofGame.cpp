#include "ofGame.h"
#include "GameConfig.h"
using namespace game;

// General configuration
int GameConfig::FRAME_RATE = 60;

// Player configurations
float GameConfig::PLAYER_INITIAL_ACCEL = 1000.0f;
float GameConfig::PLAYER_INITIAL_SPEED = 500.0f;
	
	void ofGame::setup() {
		ofSetBackgroundColor(0, 0, 0);
		previousTime = 0.0f;

		ofSetFrameRate(GameConfig::FRAME_RATE);

		player = new Player();

	}

	void ofGame::draw() {
		float currentTime = ofGetElapsedTimef();

		player->draw(currentTime, previousTime);
	}

	void ofGame::update() {
		float currentTime = ofGetElapsedTimef();
		
		player->update(currentTime, previousTime);

		previousTime = currentTime;
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