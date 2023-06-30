#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

#include "Planet.hpp"
#include "constants.cpp"

class StarSystem
{
public:
	StarSystem(unsigned int spriteID);

	std::vector<Planet> getPlanets() const;

private:
	void generate();


	std::vector<Planet> planets;

	sf::Sprite starSprite;
};

std::ostream& operator<<(std::ostream& os, StarSystem starSystem);
