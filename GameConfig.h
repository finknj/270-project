#pragma once
namespace game {

    class GameConfig {
    public:
        // GENERAL OPTIONS -------------------------------------

        // How many frames per second to render
        static int FRAME_RATE;
        // How many seconds between updates of the entities in the game
        static float UPDATE_PERIOD;
        // How many seconds between updates of the entities in the game
        static float HORIZONTAL_BOUNDARY_RATIO;

        
        // PLAYER OPTIONS --------------------------------------

        // Radius of player in pixels
        static int PLAYER_RADIUS;
        // Initial acceleration of the player when starts moving (pixels/s^2)
        static float PLAYER_INITIAL_ACCEL;
        // Initial speed of the player when starts moving (pixels/s)
        static float PLAYER_INITIAL_SPEED;


        // ENEMY OPTIONS --------------------------------------

        // Max radius of enemy in pixels
        static int ENEMY_MIN_RADIUS;
        // Min radius of enemy in pixels
        static int ENEMY_MAX_RADIUS;
        // Minimum enemy speed in pixels/s
        static float ENEMY_MAX_SPEED;
        // Minimum duration to last in the game in seconds
        static float ENEMY_MIN_TIME_ALIVED;
        // Maximum duration to last in the game in seconds
        static float ENEMY_MAX_TIME_ALIVED;
        // Duration of enemy initialization
        static float ENEMY_INIT_TIME;
        // Maximum number of enemies at a time in the game
        static int MAX_INGAME_ENEMIES;
    };
}