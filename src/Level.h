#pragma once

#include "Drawable.h"
#include <vector>

class Level : public Drawable
{
public:
	Level(const sf::Vector2u& windowSize);
	void Draw(sf::RenderWindow& window) override;
	bool IsPlayerLose() const;
private:
	sf::Texture backGroundTexture;
	sf::Sprite backGroundSprite;

	int score = 0;
	bool lose = false;
};
