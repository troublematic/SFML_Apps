#include "Main.h"
#include "Game.h"

sf::RenderWindow* window = NULL;

int main()
{
    window = new sf::RenderWindow(sf::VideoMode(200, 200), "SFML works!");

    GameInit();

    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }

        GameLoop();
    }

    return 0;
}