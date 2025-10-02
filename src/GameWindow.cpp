#include "GameWindow.h"
#include <iostream>

GameWindow::GameWindow(const WindowSettings& windowSettings)
	: window(sf::VideoMode(sf::Vector2u{ windowSettings.width, windowSettings.height }), windowSettings.title)
	, level(window.getSize())
{
	bindKeys();
}

void GameWindow::Draw()
{
	const auto onCloseLambda = [&](const sf::Event::Closed&)
	{
		window.close();
	};

	while (window.isOpen())
	{
		window.handleEvents(onCloseLambda, keyboardBindings);

		window.clear(backgroundColor);
		level.Draw(window);
		window.display();

		if (level.IsPlayerLose())
		{
			window.close();
		}
	}
}

void GameWindow::bindKeys()
{
	//keyboardBindings.bind(sf::Keyboard::Scancode::W, [&snake]()	{ snake.ChangeHeadDirection(GameSnake::Direction::UP); });
}
