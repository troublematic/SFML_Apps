#pragma once
#include <SFML/Graphics.hpp>


void DrawCircle(float centerX, float centerY, float radius, sf::Color color);


// This replaces the standard 'printf' function with one which outputs
// to the Visual Studio output window.
#define printf printf2
int __cdecl printf2(const char* format, ...);
