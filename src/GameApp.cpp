#include "GameApp.h"

GameApp::GameApp(const GameWindow::WindowSettings& windowSettings) : window(windowSettings)
{}

void GameApp::Run()
{
	window.Draw();
}
