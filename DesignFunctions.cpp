#include<windows.h>
#include<conio.h>
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void gotoxy(int x, int y) //for gotoxy--> gotoxy(x,y)
{
HANDLE hConsoleOutput;
COORD dwCursorPosition;
cout.flush();
dwCursorPosition.X = x;
dwCursorPosition.Y = y;
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
} 

void clrscr() // clearscrean--> clrscr();
{
     system("cls");
}

void pause()//pause--> pause();
{
     system("pause");
}

void setcolor(unsigned short color)
{
HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hcon,color);
}


