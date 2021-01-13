#include <SFML/Graphics.hpp>
#include "Main.h"
#include "Helpers.h"

void GameInit()
{
    printf("Hello world!");
}

void GameLoop()
{
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    window->clear();
    window->draw(shape);
    window->display();
}