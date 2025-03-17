#pragma once
#include "../../header/Level/BlockType.h"

namespace Gameplay
{
	using namespace Level;

	class GameplayController
	{
	private:
		bool isObstacle(BlockType value);
		bool isEndBlock(Level::BlockType value);
		void processObstacle();
		void processEndBlock();

		bool isLastLevel();
		void loadNextLevel();
		void gameWon();
		void gameOver();

	public:

		void initialize();
		void update();
		void render();

		void startGame();
		void onPositionChanged(int position);
		void onDeath();
	};
}
