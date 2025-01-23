#pragma once
//#include "../../header/Level/LevelModel.h"
//#include "../../header/Level/LevelView.h"
#include "LevelModel.h"
//#include "BlockType.h"

namespace Level
{
	class LevelView;

	class LevelController {
	private:
		LevelModel* level_model;
		LevelView* level_view;
	public:
		LevelController();
		~LevelController();

		void initialize();
		void update();
		void render();

		BlockType getCurrentBoxValue(int currentPosition);
	};

}