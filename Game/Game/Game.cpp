#include <SFML/Graphics.hpp>
#include "Main.h"
#include "Helpers.h"

void GameInit()
{
    // Create a window for the game
    // The numbers are the width and height in pixels. The text is the title of the window.
    window = new sf::RenderWindow(sf::VideoMode(200, 200), "SFML works!");

    // Write some text to the output window in Visual Studio
    printf("Hello world!");
}

void GameLoop()
{
    // Create a circle shape
    sf::CircleShape myCircle(100.f);
    myCircle.setFillColor(sf::Color::Green);


    // DRAW THE SCREEN

    // Clear the screen from last time
    window->clear();

    // Draw our circle
    window->draw(myCircle);

    // Show the finished image on the screen
    window->display();
}