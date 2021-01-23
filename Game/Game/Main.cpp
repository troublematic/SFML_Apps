#include <SFML\System\Clock.hpp>
#include "Main.h"
#include "Game.h"

sf::RenderWindow* window = NULL;

int main()
{
    // Run our game initialization code
    GameInit();

    // Create a 'clock' object, which is used like a stopwatch, to see how much time has passed each frame
    sf::Clock clock;

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

        // Get number of seconds since last loop (which will be a fraction of a second)
        float elapsedSeconds = clock.getElapsedTime().asSeconds();

        // Restart the clock from zero, so next time around the loop, we get the elapsed time
        clock.restart();

        // Run our game loop
        GameLoop(elapsedSeconds);

        // Show the finished image on the screen
        window->display();
    }

    // Application has finished. Exit.
    return 0;
}