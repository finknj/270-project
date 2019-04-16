#include "Enemy.h"

using namespace game;

void Enemy::init() {
	setColor(255, 0, 0);
	size = 50;

	pos.x = ofRandom(ofGetWidth() - size);
	pos.y = ofRandom(ofGetHeight() - size);

	int maxSpeed = 5;

	vel.x = ofRandom(maxSpeed * 2) - maxSpeed;
	vel.y = ofRandom(maxSpeed * 2) - maxSpeed;
}

void Enemy::update() {
	
	if (pos.x < 0 || pos.x > ofGetWidth() - size)
		vel.x *= -1;

	if (pos.y < 0 || pos.y > ofGetHeight() - size)
		vel.y *= -1;

	pos += vel;
}

void Enemy::draw() {
	ofSetColor(255,0,0);
	ofFill();
	ofDrawBox(pos.x, pos.y, 0, size);
}

