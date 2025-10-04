#include "App.h"

App::App(const Window::WindowSettings& windowSettings) : window(windowSettings)
{}

void App::Run()
{
	window.Draw();
}
