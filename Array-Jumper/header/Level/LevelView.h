#pragma once
#include "LevelController.h"
#include "../../header/UI/UIElement/ImageView.h"


namespace Level
{
	class LevelView {
	private:

		sf::RenderWindow* game_window;
		LevelController* level_controller;
		BoxDimensions box_dimensions;

		UI::UIElement::ImageView* background_image;
		const float background_alpha = 110.f;

		UI::UIElement::ImageView* box_image;

		UI::UIElement::ImageView* target_overlay_image;
		UI::UIElement::ImageView* letter_one_overlay_image;
		UI::UIElement::ImageView* letter_two_overlay_image;
		UI::UIElement::ImageView* letter_three_overlay_image;
		UI::UIElement::ImageView* obstacle_one_overlay_image;
		UI::UIElement::ImageView* obstacle_two_overlay_image;

		void createImages();
		void initializeImages();
		void updateImages();
		void drawLevel();
		void deleteImages();

	public:

		LevelView(LevelController* controller);
		~LevelView();

		void initialize();
		void update();
		void render();

		void calculateBoxDimensions();

		UI::UIElement::ImageView* getBoxOverlayImage(BlockType block_type);
		void drawBox(sf::Vector2f position);
		void drawBoxValue(sf::Vector2f position, BlockType box_value);
	};
}