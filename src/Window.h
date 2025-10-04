#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "KeyboardBinding.h"
#include "Level.h"

class Window
{
public:
	struct WindowSettings
	{
		uint32_t width = 1024;
		uint32_t height = 1024;
		std::string title = "Title";
	};

public:
	Window(const WindowSettings& windowSettings);
	void Draw();

private:
	void bindKeys();

	const sf::Color backgroundColor{ 167, 252, 0, 255 };
	sf::RenderWindow window;

	KeyboardBinding keyboardBindings;
	Level level;
};
