#pragma once
#include "../../header/Level/BlockType.h"

namespace Gameplay
{
	using namespace Level;

	class GameplayController
	{
	private:

	public:

		void initialize();
		void update();
		void render();

		void processObstacle();
		void processEndBlock();
		void onPositionChanged(int position);
		bool isObstacle(BlockType value);
		bool isEndBlock(Level::BlockType value);
	};
}
