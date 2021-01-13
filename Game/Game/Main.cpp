#include "Main.h"
#include "Game.h"

sf::RenderWindow* window = NULL;

int main()
{
    // Run our game initialization code
    GameInit();

    // While the application is running, repeatedly process events from windows, and running our game loop
    while (window->isOpen())
    {
        // Process events from windows, such as someone closing the game window
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                // The user has closed the application. Delete our window.
                window->close();
            }
        }

        // Run our game loop
        GameLoop();
    }

    // Application has finished. Exit.
    return 0;
}