#include "Game.h"
int Game::grani=0;
int Game::vid=0;
string Game::name_1;
string Game::name_2;
void Game::start()
{
	Logic L(grani);
	Decorator_base* D;
	if (vid == 1)
	{
		Decorator_1 D1;
		D = &D1;
	}
	else
	{
		Decorator_2 D2;
		D = &D2;
	}

	int exit = 1; // инициализируем, чтобы запустилось
		while (exit)
		{
			system("cls");
			D->Draw(L.brosoc(), name_1);
			cout << "----\n";
			D->Draw(L.brosoc(), name_2);
			cout << "Continue? (0 - exit) \n";
			cin >> exit;
		}
}
