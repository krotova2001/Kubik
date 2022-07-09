//класс запуска игры
#pragma once
#include <iostream>
#include "Logic.h"
#include "Decorator_1.h"
#include "Decorator_2.h"
using namespace std;
class Game // класс самой игры, статический
{public:
	static int grani; // хранение настрек чтобы передать их следующему классу
	static int vid; // вид декоратора
	static string name_1; // имя первого игрока
	static string name_2; // имя второго игрока

	static void SetGrani(int g)  // устновка граней
	{
		grani = g;
	}
	static void SetVid(int v) // установка вида
	{
		vid = v;
	}
	static void SetName1(string name) // имя первого участника
	{
		name_1 = name;
	}
	static void SetName2(string name)// имя второго участника
	{
		name_2 = name;
	}
	static void start(); // старт игры
};

