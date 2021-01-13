#include "Main.h"
#include "Helpers.h"

// Define variables which determine how big the window will be
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
    // Draw a circle
    DrawCircle(100, 50, 50, sf::Color::Green);

    // Draw a rectangle
    DrawRectangle(130, 60, 200, 100, sf::Color::Magenta);

    // Draw a pixel
    DrawPixel(30, 180, sf::Color::Yellow);

    // Draw a line
    DrawLine(230, 80, 100, 400, sf::Color::Cyan);
}
