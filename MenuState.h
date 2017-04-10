#pragma once
#ifndef MENUSTATE_H
#define MENUSTATE_H

#include <SFML/Graphics.hpp>
#include "StateManager.h"

using namespace sf;

class MenuState
{
public:
	MenuState(RenderWindow &, StateManager::State &);

	void run();

private:
	RenderWindow* window;
	StateManager::State *state;

	bool menu;

	void update();
	void handleInput();
	void render();
};

#endif