#include "Level.h"
#include "AssetManager.h"

Level::Level(const sf::Vector2u& windowSize) :
	backGroundTexture(AssetManager::GetAssetTexture("backGroundDay", true)),
	backGroundSprite(backGroundTexture)
{
	const auto& textureSize = backGroundTexture.getSize();
	backGroundSprite.setScale(sf::Vector2f{ static_cast<float>(windowSize.y) / textureSize.y, static_cast<float>(windowSize.y) / textureSize.y });
	backGroundSprite.setTextureRect(sf::IntRect(sf::Vector2i{0,0}, sf::Vector2i(windowSize)));
}

void Level::Draw(sf::RenderWindow& window)
{
	window.draw(backGroundSprite);
}

bool Level::IsPlayerLose() const
{
	return lose;
}
