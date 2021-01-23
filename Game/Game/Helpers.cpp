#include "Helpers.h"
#include "Main.h"
#include <cstdarg>
#include <stdio.h>
#include <Windows.h>

void DrawCircle(float centerX, float centerY, float radius, sf::Color color)
{
    // Create a circle object
	sf::CircleShape myCircle(radius);

    // Set the top left position by subracting the radius from the center position
    float left = centerX - radius;
    float top = centerY - radius;
    myCircle.setPosition(left, top);

    // Set the color
	myCircle.setFillColor(color);

    // Draw it
    window->draw(myCircle);
}

void DrawRectangle(float left, float top, float width, float height, sf::Color color)
{
    // Create a rectangle object
    sf::RectangleShape rectangle(sf::Vector2f(width, height));

    // Set the top left position
    rectangle.setPosition(left, top);

    // Set the color
    rectangle.setFillColor(color);

    // Draw it
    window->draw(rectangle);
}

void DrawPixel(float x, float y, sf::Color color)
{
    // Draw a 1x1 rectangle, using the DrawRectangle function above
    DrawRectangle(x, y, 1, 1, color);
}

void DrawLine(float x1, float y1, float x2, float y2, sf::Color color)
{
    // Make an array of the two end points (an array is like a list)
    sf::Vertex points[] =
    {
        sf::Vertex(sf::Vector2f(x1, y1)),
        sf::Vertex(sf::Vector2f(x2, y2))
    };

    // Set the color of the points
    points[0].color = color;
    points[1].color = color;

    // Draw the line made by the two end points
    window->draw(points, 2, sf::Lines);
}

void DrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, sf::Color color)
{
    // Create an empty convex shape
    sf::ConvexShape convex;

    // Resize it to 3 points
    convex.setPointCount(3);

    // Define the points
    convex.setPoint(0, sf::Vector2f(x1, y1));
    convex.setPoint(1, sf::Vector2f(x2, y2));
    convex.setPoint(2, sf::Vector2f(x3, y3));

    // Set color
    convex.setFillColor(color);

    // Draw the line made by the two end points
    window->draw(convex);
}

void DrawString(std::string myString, float x, float y, int height, sf::Color color)
{
    sf::Text text;

    // Set the text position
    text.setPosition(x, y);

    // Select the font
    text.setFont(defaultFont); // font is a sf::Font

    // Set the string to display
    text.setString(myString);

    // Set the character size (in pixels)
    text.setCharacterSize(height);

    // Set the color
    text.setFillColor(color);

    // Set the text style
    text.setStyle(sf::Text::Bold);

    // Draw the text
    window->draw(text);
}


// This function gets called when you call printf
// It prints text to the output window in Visual Studio
// This function uses some advanced features of the language, so don't worry
// about understanding it :)
int __cdecl printf2(const char* format, ...)
{
    // Create temporary storage for the text
    char str[1024];

    // Build the text into str
    va_list argptr;
    va_start(argptr, format);
    int ret = vsnprintf(str, sizeof(str), format, argptr);
    va_end(argptr);

    // Print the string to Visual Studio
    OutputDebugStringA(str);

    return ret;
}
