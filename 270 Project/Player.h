#pragma once
#include "base.h"

namespace game {

	class Player : public base
	{
	public:
		enum MovementDirection {
			UP,
			DOWN,
			LEFT,
			RIGHT
		};

		//Sets initial values for player
		void init();
		void move();
		bool checkSpace();
		void collectCoin();
		void die();
		//void draw();
		
		//updates physics
		void update(float timeNow, float timeBefore);
		// draw method
		void draw(float timeNow, float timeBefore);

		//Constructors
		Player();
		Player(int leftBound);

		// Movements methods
		void handleMovementKeyPressed(MovementDirection direction);
		void handleMovementKeyReleased(MovementDirection direction);

	private:
		ofVec2f position;
		ofVec2f velocity;
		ofVec2f acceleration;

		bool isUpKeyPressed;
		bool isDownKeyPressed;
		bool isRightKeyPressed;
		bool isLeftKeyPressed;

		void startMovingUp();
		void startMovingDown();
		void startMovingLeft();
		void startMovingRight();

		void stopVerticalMovement();
		void stopHorizontalMovement();

		void updateVelocity(float dt);
		void updatePosition(float dt);
	};
}