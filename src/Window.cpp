#include "Window.h"
#include <iostream>

Window::Window(const WindowSettings& windowSettings)
	: window(sf::VideoMode(sf::Vector2u{ windowSettings.width, windowSettings.height }), windowSettings.title)
	, level(window.getSize())
{
	bindKeys();
}

void Window::Draw()
{
	const auto onCloseLambda = [&](const sf::Event::Closed&)
	{
		window.close();
	};

	while (window.isOpen())
	{
		window.handleEvents(onCloseLambda, keyboardBindings);

		window.clear();
		level.Draw(window);
		window.display();

		if (level.IsPlayerLose())
		{
			window.close();
		}
	}
}

void Window::bindKeys()
{
	//keyboardBindings.bind(sf::Keyboard::Scancode::W, [&snake]()	{ snake.ChangeHeadDirection(GameSnake::Direction::UP); });
}
