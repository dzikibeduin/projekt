#pragma once
#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <SFML/Graphics.hpp>
#include "StateManager.h"

using namespace sf;

class GameState
{
public:
	GameState(RenderWindow &, StateManager::State &);

	void run();

private:
	RenderWindow *window;
	StateManager::State *state;

	bool game;

	void update();
	void handleInput();
	void render();

};

#endif