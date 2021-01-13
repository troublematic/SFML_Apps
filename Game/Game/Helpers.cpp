#include "Helpers.h"
#include "Main.h"
#include <cstdarg>
#include <stdio.h>
#include <Windows.h>

void DrawCircle(float centerX, float centerY, float radius, sf::Color color)
{
	sf::CircleShape myCircle(radius);
    float left = centerX - radius;
    float top = centerY - radius;
    myCircle.setPosition(left, top);
	myCircle.setFillColor(color);
    window->draw(myCircle);
}


// This function gets called when you call printf
// It prints text to the output window in Visual Studio
// This function uses some advanced features of the language, so don't worry
// about understanding it :)
int __cdecl printf2(const char* format, ...)
{
    char str[1024];

    va_list argptr;
    va_start(argptr, format);
    int ret = vsnprintf(str, sizeof(str), format, argptr);
    va_end(argptr);

    OutputDebugStringA(str);

    return ret;
}
