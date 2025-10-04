#include "Level.h"

Level::Level(const sf::Vector2u& windowSize) :
	font("assets/arial.ttf"),
	scoreText(font),
	backGroundTexture("assets/background.jpg"),
	backGroundSprite(backGroundTexture)
{
	scoreText.setString("SCORE: " + std::to_string(score));
	scoreText.setCharacterSize(24);
	scoreText.setFillColor(sf::Color::Black);	
}

void Level::Draw(sf::RenderWindow& window)
{
	window.draw(backGroundSprite);
	window.draw(scoreText);
}

bool Level::IsPlayerLose() const
{
	return lose;
}
