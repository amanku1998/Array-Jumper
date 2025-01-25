#pragma once
//#include"../../header/Player/PlayerModel.h"
#include"../../header/Player/MovementDirection.h"
#include"../../header/Event/EventService.h"
#include"../../header/Level/BlockType.h"
#include"../../header/Level/LevelModel.h"

namespace Player
{
	using namespace Event;
	using namespace Level;

	class PlayerView;
	class PlayerModel;
	enum class PlayerState;

	class PlayerController
	{
	private:

		PlayerModel* player_model;
		PlayerView* player_view;

		EventService* event_service;
		LevelModel current_level_data; // Assumes this is already defined

		void destroy();

	public:
		PlayerController();
		~PlayerController();

		void initialize();
		void update();
		void render();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
		void move(MovementDirection direction);
		bool isPositionInBound(int targetPosition);

		int getCurrentPosition();
		void readInput();
		void jump(MovementDirection direction);
		void takeDamage();
	};

}