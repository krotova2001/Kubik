//класс логики игры
#pragma once
#include <cstdlib>

class Logic
{
	int grani;// количество граней
public:
	Logic() {}
	void SetGrani(int g) // установка граней
	{
		grani = g;
	}
	int brosoc () // бросание кубика
	{
		return rand()%grani+1; // просто отдаем случайное значение в пределах граней
	}
};

