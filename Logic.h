#pragma once
#include <cstdlib>

class Logic
{
	int grani; // ���������� ������
public:
	Logic()	{}
	void SetGrani(int g)
	{
		grani = g;
	}
	int brosoc () // �������� ������
	{
		return grani -1;
	}
};

