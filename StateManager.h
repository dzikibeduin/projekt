#pragma once
#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include <SFML/Graphics.hpp>

using namespace sf;

class StateManager
{
public:
	StateManager();
	~StateManager();

	void run();

	bool hideCursor;

	enum State
	{
		MENU,
		GAME,
		END
	};
};

#endif