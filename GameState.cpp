#include "GameState.h"

GameState::GameState(RenderWindow &window, StateManager::State &state)
{
	this->window = &window;
	this->state = &state;

	window.setTitle("GAME");

	game = true;
}

void GameState::run()
{
	while (game)
	{
		update();
		render();
	}
}

void GameState::handleInput()
{
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		*state = StateManager::MENU;
		game = false;
	}
}

void GameState::update()
{
	handleInput();
}

void GameState::render()
{
	window->clear();
	window->display();
}