#pragma once

#include "Window.h"

#include <memory>

class App
{
public:
	App(const Window::WindowSettings& windowSettings);
	void Run();
private:
	Window window;
};
