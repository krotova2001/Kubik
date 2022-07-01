#pragma once
#include "Logic.h"
#include <iostream>
using namespace std;
class Decorator
{
public:
	Logic P;
	int vid = 0;
	Decorator(int v)
	{
		vid = v;
	}
	void Draw()
	{
		if (vid)
		{
			cout << "\nPlayer - 1\n" << P.brosoc();
			cout << "\nPlayer - 2\n" << P.brosoc();
		}
		else
		{
			cout << "grani\n";
		}
	}
};

