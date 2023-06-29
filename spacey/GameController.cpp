#include "GameController.hpp"

GameController::GameController() {
    sf::RenderWindow window(sf::VideoMode(HORIZONTAL_RESOLUTION, VERTICAL_RESOLUTION), "Spacey");

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

}

void GameController::onUpdate() {

}
