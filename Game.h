//����� ������� ����
#pragma once
#include <iostream>
#include "Logic.h"
#include "Decorator_1.h"
#include "Decorator_2.h"
using namespace std;
class Game // ����� ����� ����, �����������
{public:
	static int grani; // �������� ������� ����� �������� �� ���������� ������
	static int vid; // ��� ����������
	static string name_1; // ��� ������� ������
	static string name_2; // ��� ������� ������

	static void SetGrani(int g)  // �������� ������
	{
		grani = g;
	}
	static void SetVid(int v) // ��������� ����
	{
		vid = v;
	}
	static void SetName1(string name) // ��� ������� ���������
	{
		name_1 = name;
	}
	static void SetName2(string name)// ��� ������� ���������
	{
		name_2 = name;
	}
	static void start(); // ����� ����
};

