//базовый класс декоратора

#pragma once
#include <iostream>
using namespace std;
class Decorator_base
{
public:
	Decorator_base() {}
	virtual void Draw(int gran, string name) // виртуальная функция для переопределения
	{
		cout << "Player - " <<name << " - " << gran << "\n";
	}
};

