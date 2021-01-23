#include "Main.h"
#include "Helpers.h"

// Define variables which determine how big the window will be
int SCREEN_WIDTH = 800;
int SCREEN_HEIGHT = 600;

// GameInit is called once, when the program starts. Its job is to do things which only happen once, at the start.
// E.g.
//		Create the window that the game runs in
//		Load any images or sounds that the game needs
void GameInit()
{
	// Create a window for the game
	// The numbers are the width and height in pixels. The text is the title of the window.
	window = new sf::RenderWindow(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML works!");

	// Write some text to the output window in Visual Studio
	printf("Hello world!");
}

float totalTime = 0.0f;		// Total number of seconds since the program started

// GameLoop is called repeatedly. Its job is to update the 'game', and draw the screen.
void GameLoop(float elapsedSeconds)
{
	// Keep a running total of how much time has passed
	totalTime = totalTime + elapsedSeconds;

	// Draw a circle
	DrawCircle(100, 50, 50, sf::Color::Green);

	// Draw a rectangle, whose width grows over time
	DrawRectangle(130, 60, totalTime * 10, 100, sf::Color::Magenta);

	// Draw a pixel
	DrawPixel(30, 180, sf::Color::Yellow);

	// Draw a line
	DrawLine(230, 80, 100, 400, sf::Color::Cyan);

	// Draw a triangle
	float triangleX = 160.0f;
	float triangleY = 80.0f;
	DrawTriangle(triangleX, triangleY, triangleX, triangleY + 60, triangleX + 120, triangleY + 60, sf::Color::Yellow);
}
