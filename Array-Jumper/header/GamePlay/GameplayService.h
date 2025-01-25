#pragma once
#include "../../header/Gameplay/GameplayController.h"

namespace Gameplay
{
	class GameplayService
	{
	private:
		GameplayController* gameplay_controller;

		void destroy();

	public:
		GameplayService();
		~GameplayService();

		void initialize();
		void update();
		void render();

		void onPositionChanged(int position);
		void onDeath();
	};
}