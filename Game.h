//класс запуска игры
#pragma once
#include <iostream>
#include "Logic.h"
#include "Decorator.h"
using namespace std;
class Game // класс самой игры, статический
{
	static int grani; // хранение настрек чтобы передать их следующему классу
	static int vid;
public:
	static void SetGrani(int g) 
	{
		grani = g;
	}
	static void SetVid(int v)
	{
		vid = v;
	}
	static int GetGrani(){ return grani; } // чтобы передать классу Logic
	static void start();
};

