#pragma once

#include <SFML/Graphics.hpp>
#include "constants.cpp"
#include "World.hpp"

class GameController
{
public:
	GameController();

	void centerView(float centerX, float centerY);

private:
	void onStart();
	void onUpdate();

	void createWorld();

	void drawWorld();
	void drawStarSystem(StarSystem starSystem, float x, float y);
	void drawPlanet(Planet planet);

	sf::RenderWindow window;

	World world;
};

