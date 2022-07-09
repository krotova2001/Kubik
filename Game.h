//класс запуска игры
#pragma once
#include <iostream>
#include "Logic.h"
#include "Decorator.h"
#include "Decorator_1.h"
#include "Decorator_2.h"
using namespace std;
class Game // класс самой игры, статический
{
	static int grani; // хранение настрек чтобы передать их следующему классу
	static int vid;
	static string name_1;
	static string name_2;

public:
	static void SetGrani(int g) 
	{
		grani = g;
	}
	static void SetVid(int v)
	{
		vid = v;
	}
	static void SetName1(string name)
	{
		name_1 = name;
	}
	static void SetName2(string name)
	{
		name_2 = name;
	}
	static void start();
};

