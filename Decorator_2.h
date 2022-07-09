#pragma once
#include "Decorator.h"
class Decorator_2 :
    public Decorator_base
{
public:
    void Draw(int gran, string player)
    {
        system("cls");
        cout << "\nPlayer - " << player <<"\n";
        cout << "-----\n";
        cout << "|   |\n";
        cout << "| " << gran << " | \n";
        cout << "-----\n";
        cout << "\n";
    }
};

