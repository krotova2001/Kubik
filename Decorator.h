#pragma once
#include "Logic.h"
#include <iostream>
using namespace std;
class Decorator
{
public:
	int grani;
	int vid = 0;
	Logic P;
	Decorator(int v, int g)
	{
		grani = g;
		vid = v;
	}
	void Draw()
	{
		P.SetGrani(grani);
		if (vid)
		{
			cout << "\nPlayer - 1\n";
			cout << "-----\n";
			cout << "|   |\n";
			cout << "| "<< P.brosoc()<<" | \n";
			cout << "-----\n";
			cout << "\n";
			cout << "\nPlayer - 2\n";
			cout << "-----\n";
			cout << "|   |\n";
			cout << "| " << P.brosoc() << " | \n";
			cout << "-----\n";
			cout << "\n";
		}
		else
		{
			cout << "\nPlayer - 1\n" << P.brosoc();
			cout << "\nPlayer - 2\n" << P.brosoc();
			cout << "\n";
		}
	}
};

