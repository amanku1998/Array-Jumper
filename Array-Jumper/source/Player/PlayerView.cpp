#include"../../header/Player/PlayerView.h"
#include"../../header/Player/PlayerModel.h"
#include "../../header/Global/Config.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Player/PlayerController.h" 

namespace Player
{
	using namespace Global;
	using namespace UI::UIElement;

	PlayerView::PlayerView(PlayerController* controller)
	{
		player_controller = controller;
		player_image = new ImageView();
		game_window = nullptr;
	}

	PlayerView::~PlayerView() {
		delete player_image;
		player_image = nullptr;
	}

	void PlayerView::calculatePlayerDimensions()
	{
		player_height = 1000.f;
		player_width = 1000.f;
	}

	void PlayerView::initializePlayerImage()
	{
		player_image->initialize(Config::character_texture_path,
			player_width,
			player_height,
			sf::Vector2f(0, 0));
	}

	void PlayerView::loadPlayer()
	{
		calculatePlayerDimensions();
		initializePlayerImage();
	}

	void PlayerView::initialize()
	{
		game_window = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		loadPlayer();
	}

	void PlayerView::update()
	{
		// Update player position based on the PlayerController's input or other factors
		updatePlayerPosition();
	}

	void PlayerView::render()
	{
		//
		switch (player_controller->getPlayerState())
		{
		case PlayerState::ALIVE:
			drawPlayer();
			break;
		}
	}

	sf::Vector2f PlayerView::calulcatePlayerPosition()
	{
		return sf::Vector2f(0, 0);
	}

	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calulcatePlayerPosition());
	}

	void PlayerView::drawPlayer()
	{
		player_image->render();
	}

}