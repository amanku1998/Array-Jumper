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

		int GetCurrentPosition();
		void SetCurrentPosition(int new_position);

		PlayerState GetPlayerState();
		void SetPlayerState(PlayerState state);
	};

}