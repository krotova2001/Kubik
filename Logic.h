//����� ������ ����
#pragma once
#include <cstdlib>

class Logic
{
	int grani;// ���������� ������
public:
	Logic(int g) 
	{
		grani = g;
	}
	int brosoc () // �������� ������
	{
		return rand()%grani+1; // ������ ������ ��������� �������� � �������� ������
	}
};

