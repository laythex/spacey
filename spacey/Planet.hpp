#pragma once

#include <SFML/Graphics.hpp>

class Planet
{
public:
	Planet(float orbitRadius, unsigned int spriteID);

	sf::Vector2f getLocalPosition();

private:
	float orbitRadius;
	float orbitAngle;

	sf::Sprite sprite;
};

std::ostream& operator<<(std::ostream& os, Planet planet);