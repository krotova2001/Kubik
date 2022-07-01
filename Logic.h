#pragma once
#include <cstdlib>

class Logic
{
	int grani;// количество граней
public:
	Logic()
	{ 
		
	}
	void SetGrani(int g)
	{
		grani = g;
	}
	int brosoc () // бросание кубика
	{
		return rand()%grani+1;
	}
};

