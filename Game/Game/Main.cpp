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
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                // The user has closed the application. Delete our window.
                window->close();
            }
        }

        // Clear the screen from last time
        window->clear();

        // Run our game loop
        GameLoop();

        // Show the finished image on the screen
        window->display();
    }

    // Application has finished. Exit.
    return 0;
}