#include "GameController.hpp"

GameController::GameController() {
    window.create(sf::VideoMode(HORIZONTAL_RESOLUTION, VERTICAL_RESOLUTION), "Spacey");

    onStart();

    while (window.isOpen()) 
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
            
        window.clear();

        onUpdate();

        window.display();
    }
}

void GameController::onStart() {
    centerView(0, 0);
    createWorld();
}

void GameController::onUpdate() {
    drawWorld();
}

void GameController::centerView(float centerX, float centerY) {
    sf::View view(sf::Vector2f(centerX, centerY), sf::Vector2f(HORIZONTAL_RESOLUTION, VERTICAL_RESOLUTION));
    window.setView(view);
}

void GameController::createWorld() {
    world = World();
}

void GameController::drawWorld() {
    for (auto& starSystem : world.getStarSystems()) {
        drawStarSystem(starSystem, 0, 0);
    }
}

void GameController::drawStarSystem(StarSystem starSystem, float x, float y) {
    sf::CircleShape star(STAR_RADIUS);
    star.setOrigin(STAR_RADIUS, STAR_RADIUS);
    star.setPosition(x, y);
    star.setFillColor(sf::Color::Yellow);
    
    window.draw(star);

    for (auto& planet : starSystem.getPlanets()) {
        drawPlanet(planet);
    }
}

void GameController::drawPlanet(Planet planet) {
    sf::CircleShape planetBody(PLANET_RADIUS);
    planetBody.setOrigin(PLANET_RADIUS, PLANET_RADIUS);
    planetBody.setPosition(planet.getLocalPosition());
    planetBody.setFillColor(sf::Color::Blue);

    window.draw(planetBody);

}
