#include <iostream>
#include <ctime> 
#include <Windows.h> 
#include <conio.h> 
using namespace std;

void SetCursor(int x, int y, int color, string text,char)
{
    
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD position;
    position.X = x; 
    position.Y = y;
    SetConsoleCursorPosition(h, position); 
    SetConsoleTextAttribute(h, color); 
    cout << text; 
    cout << "\n";
}