#pragma once

#include "Drawable.h"
#include <vector>

class GameLevel : public Drawable
{
public:
	GameLevel(const sf::Vector2u& windowSize);
	void Draw(sf::RenderWindow& window) override;
	bool IsPlayerLose() const;
private:
	const sf::Font font;
	sf::Text scoreText;
	sf::Texture backGroundTexture;
	sf::Sprite backGroundSprite;

	int score = 0;
	bool lose = false;
};

