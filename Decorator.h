//класс декоратора

#pragma once
#include <iostream>
using namespace std;
class Decorator_base
{
public:
	Decorator_base() // опять нужно передать грани. НУ и вид кубиков
	{
	}
	virtual void Draw(int gran, string name) // чистая виртуальная функция для переопределения
	{
		system("cls");
		cout << "Player - " <<name << "--> " << gran << "\n";
	}
};

