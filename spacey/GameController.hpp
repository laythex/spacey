#pragma once

#include <SFML/Graphics.hpp>
#include "constants.hpp"

class GameController
{
public:
	GameController();

private:
	void onStart();
	void onUpdate();
};

