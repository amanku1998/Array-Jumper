#pragma once

namespace Player 
{
	enum class PlayerState
	{
		ALIVE, DEAD
	};

	class PlayerModel 
	{
	private:
		const int max_lives = 3;
		PlayerState player_state;
		int current_position;
		int current_lives;

	public:

		void initialize();

		int getCurrentPosition();
		void setCurrentPosition(int new_position);

		PlayerState getPlayerState();
		void setPlayerState(PlayerState state);
		void resetPlayer();

		int getCurrentLives();
		void decrementLife();
		void resetPosition();
	};

}