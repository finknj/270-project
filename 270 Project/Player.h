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

		int Coins_Collected;
		ofVec2f getPosition();


		//Sets initial values for player
		void init();
		bool checkSpace();
		void collectCoin();
		void die();
		
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
		ofVec2f pos;
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