#include "App.h"

#include <windows.h>

int APIENTRY wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
{
	App app({.width = 1000, .height = 1000, .title = "Flappy bird" });
	app.Run();
}