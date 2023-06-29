#pragma once

#include <vector>

using std::vector;

#include "Planet.hpp"

class StarSystem
{

private:
	vector<Planet> planets;

	sf::Sprite starSprite;
};

