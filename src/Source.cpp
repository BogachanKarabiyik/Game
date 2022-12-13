#include <iostream>
#include <fstream>
#include <string>
#define _WIN32_WINNT 0x0500
#define NOMINMAX
#include <algorithm>
#include <windows.h>
#include <random>
#pragma comment(lib, "winmm.lib")
std::random_device rd;
std::default_random_engine generator(rd());
std::uniform_int_distribution<int> distribution(1, 6);
#include "Header.h"

int main() {
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.dwFontSize.Y = 24;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	// HWND hWnd = GetConsoleWindow();
	// ShowWindow(hWnd, SW_SHOWMAXIMIZED);

	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions

	MoveWindow(console, r.left, r.top, 1000, 750, TRUE); // 800 width, 100 height
	SetWindowLong(console, GWL_STYLE, GetWindowLong(console, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
	
    CONSOLE_SCREEN_BUFFER_INFO screenBufferInfo;

    // Get console handle and get screen buffer information from that handle.
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsole, &screenBufferInfo);

    // Get rid of the scrollbar by setting the screen buffer size the same as 
    // the console window size.
    COORD new_screen_buffer_size;

    // screenBufferInfo.srWindow allows us to obtain the width and height info 
    // of the visible console in character cells.
    // That visible portion is what we want to set the screen buffer to, so that 
    // no scroll bars are needed to view the entire buffer.
    new_screen_buffer_size.X = screenBufferInfo.srWindow.Right -
        screenBufferInfo.srWindow.Left + 1; // Columns
    new_screen_buffer_size.Y = screenBufferInfo.srWindow.Bottom -
        screenBufferInfo.srWindow.Top + 1; // Rows

    // Set new buffer size
    SetConsoleScreenBufferSize(hConsole, new_screen_buffer_size);

    system("title Game");
    system("color 0F");

	display.title();
	system("pause>0");
}