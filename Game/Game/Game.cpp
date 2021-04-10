#include "Main.h"
#include "Helpers.h"

// Define variables which determine how big the window will be
int SCREEN_WIDTH = 800;
int SCREEN_HEIGHT = 600;

sf::Texture ghostTexture;

// GameInit is called once, when the program starts. Its job is to do things which only happen once, at the start.
// E.g.
//		Create the window that the game runs in
//		Load any images or sounds that the game needs
void GameInit()
{
	// Create a window for the game
	// The numbers are the width and height in pixels. The text is the title of the window.
	window = new sf::RenderWindow(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML works!");

	// Load a texture
	if (!ghostTexture.loadFromFile("Ghost.png"))
	{
		printf("Texture failed to load!\n");
	}

	// Write some text to the output window in Visual Studio
	printf("Hello world!\n");
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

	// Draw text
	std::string text = "Oh my word!";
	DrawString(text, 300, 50, 32, sf::Color::Green);

	// Draw texture
	DrawTexture(500, 100, ghostTexture);
	DrawTexture(550, 100, 64, 32, ghostTexture);
	DrawTexture(650, 100, 16, 80, ghostTexture);

	// Draw a colored circle where the mouse is
	float mouseX = (float)GetMouseX();
	float mouseY = (float)GetMouseY();
	bool mousePressed = IsMouseButtonPressed();
	if (mousePressed)
	{
		// Draw a red circle if the mouse button is pressed
		DrawCircle(mouseX, mouseY, 20, sf::Color::Red);
	}
	else
	{
		// Otherwise, draw a yellow circle
		DrawCircle(mouseX, mouseY, 10, sf::Color::Yellow);
	}

	// If the space bar is pressed, draw a rectangle
	if (IsKeyPressed(sf::Keyboard::Space))
	{
		DrawRectangle(30, 460, 50, 10, sf::Color::Green);
	}
}
