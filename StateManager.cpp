#include "StateManager.h"
#include "MenuState.h"
#include "GameState.h"

RenderWindow window;
StateManager::State state;

StateManager::StateManager()
{
	state = END;

	ContextSettings settings;
	settings.antialiasingLevel = 8;

	window.create(VideoMode(1280, 720), "", Style::Default, settings);
	window.setFramerateLimit(61);

	state = MENU;
}

StateManager::~StateManager()
{
	window.close();
}

void StateManager::run()
{
	while (state != END)
	{
		switch (state)
		{
			case MENU:
			{
				window.setMouseCursorVisible(true);
				MenuState menu(window, state);
				menu.run();
			}break;

			case GAME:
			{
				window.setMouseCursorVisible(false);
				GameState game(window, state);
				game.run();
			}break;
		}
	}
}