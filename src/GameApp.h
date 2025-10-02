#pragma once

#include "GameWindow.h"

#include <memory>

class GameApp
{
public:
	GameApp(const GameWindow::WindowSettings& windowSettings);
	void Run();
private:
	GameWindow window;
};
