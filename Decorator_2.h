//класс декоратора второго вида

#pragma once
#include "Decorator.h"
class Decorator_2 :
    public Decorator_base
{
public:
    void Draw(int gran, string player)// переопределенная функция
    {
      // здесь уже рисуем типа - кубик
        cout << "\nPlayer - " << player <<"\n";
        cout << "-----\n";
        cout << "|   |\n";
        cout << "| " << gran << " | \n";
        cout << "-----\n";
        cout << "\n";
    }
};

