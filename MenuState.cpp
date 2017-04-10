#include "MenuState.h"

MenuState::MenuState(RenderWindow &window, StateManager::State &state)
{
	this->window = &window;
	this->state = &state;

	window.setTitle("MENU");

	menu = true;
}

void MenuState::run()
{
	while (menu)
	{
		Event event;

		while (window->pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				*state = StateManager::END;
				menu = false;
			}

			else if (event.type == Event::MouseButtonPressed)
			{
				*state = StateManager::GAME;
				menu = false;
			}
		}

		update();
		render();
	}
}

void MenuState::handleInput()
{

}

void MenuState::update()
{
	handleInput();
}

void MenuState::render()
{
	window->clear();

	window->display();
}