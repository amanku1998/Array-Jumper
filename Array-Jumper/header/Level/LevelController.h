#pragma once
#include "LevelModel.h"

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

		BoxDimensions getBoxDimensions();
		BlockType getCurrentBoxValue(int currentPosition);
	};

}