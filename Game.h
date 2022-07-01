#pragma once
#include <iostream>
#include "Logic.h"
#include "Decorator.h"
using namespace std;
class Game // класс самой игры, статический
{
	static int grani;
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
	static int GetGrani(){ return grani; }
	static void start();
};

