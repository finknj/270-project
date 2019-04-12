#include "Player.h"
#include "GameConfig.h"

using namespace game;

void Player::init() {
	
	setColor(0, 255, 0);
	size = 35;

	pos.x = ofRandom(ofGetWidth() - size);
	pos.y = ofRandom(ofGetHeight() - size);

	isDownKeyPressed = false;
	isUpKeyPressed = false;
	isLeftKeyPressed = false;
	isRightKeyPressed = false;

	velocity.x = 0;
	velocity.y = 0;

	/*while (checkSpace == false) {
		pos.x = ofRandom(ofGetWidth() - size);
		pos.y = ofRandom(ofGetHeight() - size);
	}*/
}

void Player::handleMovementKeyPressed(MovementDirection direction) {

	switch (direction) {
	case UP:
		// is not moving up
		if (!isUpKeyPressed) {
			startMovingUp();
			isUpKeyPressed = true;
			printf("up");		//registers key press and release
		}
		break;
	case DOWN:
		// is not moving down
		if (!isDownKeyPressed) {
			startMovingDown();
			isDownKeyPressed = true;
		}
		break;
	case RIGHT:
		// is not moving right
		if (!isRightKeyPressed) {
			startMovingRight();
			isRightKeyPressed = true;
		}
		break;
	case LEFT:
		// is not moving left
		if (!isLeftKeyPressed) {
			startMovingLeft();
			isLeftKeyPressed = true;
		}
		break;
	}
}

void Player::handleMovementKeyReleased(MovementDirection direction) {
	switch (direction) {
	case UP:
		// is actually moving up?
		if (isUpKeyPressed) {
			isUpKeyPressed = false;
			if (isDownKeyPressed) {
				startMovingDown();
			}
			else {
				stopVerticalMovement();
			}
		}
		break;
	case DOWN:
		// is actually moving down?
		if (isDownKeyPressed) {
			isDownKeyPressed = false;
			if (isUpKeyPressed) {
				startMovingUp();
			}
			else {
				stopVerticalMovement();
			}
		}
		break;
	case RIGHT:
		// is actually moving right?
		if (isRightKeyPressed) {
			isRightKeyPressed = false;
			if (isLeftKeyPressed) {
				startMovingLeft();
			}
			else {
				stopHorizontalMovement();
			}
		}
		break;
	case LEFT:
		// is actually moving left?
		if (isLeftKeyPressed) {
			isLeftKeyPressed = false;
			if (isRightKeyPressed) {
				startMovingRight();
			}
			else {
				stopHorizontalMovement();
			}
		}
		break;
	}
}

void Player::startMovingUp() {
	velocity.y = -GameConfig::PLAYER_INITIAL_SPEED;
	acceleration.y = -GameConfig::PLAYER_INITIAL_ACCEL;
	printf("%g ", velocity.y);			//returning -500 -1000 for values but still not moving?
	printf("%g ", acceleration.y);

}

void Player::startMovingDown() {
	velocity.y = GameConfig::PLAYER_INITIAL_SPEED;
	acceleration.y = GameConfig::PLAYER_INITIAL_ACCEL;
}

void Player::startMovingLeft() {
	velocity.x = -GameConfig::PLAYER_INITIAL_SPEED;
	acceleration.x = -GameConfig::PLAYER_INITIAL_ACCEL;
}

void Player::startMovingRight() {
	velocity.x = GameConfig::PLAYER_INITIAL_SPEED;
	acceleration.x = GameConfig::PLAYER_INITIAL_ACCEL;
}

void Player::stopVerticalMovement() {
	velocity.y = 0;
	acceleration.y = 0;
}

void Player::stopHorizontalMovement() {
	velocity.x = 0;
	acceleration.x = 0;
}

void Player::move() {
	
}


bool Player::checkSpace() {
	return true; 
}


void Player::collectCoin() {

}

void Player::die() {

}


void Player::update(float timeNow, float timeBefore) {
	updatePosition(timeNow - timeBefore);
}

void Player::updateVelocity(float dt) {
	velocity += acceleration * dt;
}

void Player::updatePosition(float dt) {
	updateVelocity(dt);
	
	ofVec2f delta = velocity * dt;

	if (position.x + delta.x + size >= ofGetWidth()) {
		delta.x = 0;
	}
	else if (position.x + delta.x - size <= 0) {
		delta.x = 0;
	}

	if (position.y + delta.y + size >= ofGetHeight()) {
		delta.y = 0;
	}
	else if (position.y + delta.y - size <= 0) {
		delta.y = 0;
	}

	position += delta;
}

Player::Player() {
	init();
}

Player::Player(int leftBound) {
	init();
	position.x = leftBound + ofRandom(ofGetWidth() - leftBound - 2 * size);
	position.y = size + ofRandom(ofGetHeight() - 2 * size);
}

void Player::draw(float timeNow, float timeBefore) {
	ofSetColor(red, green, blue);
	ofDrawCircle(pos.x, pos.y, 0, size);
}