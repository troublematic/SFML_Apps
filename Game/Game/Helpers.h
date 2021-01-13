#pragma once

#if 1
#include <cstdarg>
#include <stdio.h>
#include <Windows.h>

// This replaces the standard 'printf' function with one which outputs
// to the Visual Studio output window.
#define printf printf2
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
#endif