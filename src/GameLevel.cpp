#include "GameLevel.h"

GameLevel::GameLevel(const sf::Vector2u& windowSize) :
	font("assets/arial.ttf"),
	scoreText(font)
{
	scoreText.setString("SCORE: " + std::to_string(score));
	scoreText.setCharacterSize(24);
	scoreText.setFillColor(sf::Color::Black);	
}

void GameLevel::Draw(sf::RenderWindow& window)
{
	window.draw(scoreText);
}

bool GameLevel::IsPlayerLose() const
{
	return lose;
}
