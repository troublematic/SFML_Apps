#include "Main.h"
#include "Helpers.h"

int SCREEN_WIDTH = 800;
int SCREEN_HEIGHT = 600;

void GameInit()
{
    // Create a window for the game
    // The numbers are the width and height in pixels. The text is the title of the window.
    window = new sf::RenderWindow(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML works!");

    // Write some text to the output window in Visual Studio
    printf("Hello world!");
}

void GameLoop()
{
    // Create a circle shape
    DrawCircle(50, 25, 25, sf::Color::Green);
}