#include"../../header/Player/PlayerView.h"

namespace Player
{
	PlayerView::PlayerView()
	{
		game_window = nullptr;
		player_image = new ImageView();
	}

	PlayerView::~PlayerView() {}

	void PlayerView::initialize()
	{
		//
	}

	void PlayerView::update()
	{
		//
	}

	void PlayerView::render()
	{
		//
	}

	void PlayerView::calculatePlayerDimensions()
	{
		player_height = 1000.f;
		player_width = 1000.f;
	}
}