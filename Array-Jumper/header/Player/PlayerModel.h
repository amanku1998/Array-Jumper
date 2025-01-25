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
		int current_position;
		PlayerState player_state;

	public:

		void initialize();

		int getCurrentPosition();
		void setCurrentPosition(int new_position);

		PlayerState getPlayerState();
		void setPlayerState(PlayerState state);
		void resetPlayer();
	};

}