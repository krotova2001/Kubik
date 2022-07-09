//класс логики игры
#pragma once
#include <cstdlib>

class Logic
{
	int grani;// количество граней
public:
	Logic(int g) 
	{
		grani = g;
	}
	int brosoc () // бросание кубика
	{
		return rand()%grani+1; // просто отдаем случайное значение в пределах граней
	}
};

