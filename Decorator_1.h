//декоратор первого вида

#pragma once
#include "Decorator.h"
class Decorator_1 :
    public Decorator_base
{
public:
    void Draw(int gran, string player) // переопределенная функция
    {
      //просто отображаем номер грани
        cout << "Player " << player << " --> " << gran << "\n";
    }
};

