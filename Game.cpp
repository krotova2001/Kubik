#include "Game.h"
int Game::grani=0;
int Game::vid=0;
void Game::start()
{
		Decorator D(vid, grani);
		int exit = 1; // инициализируем, чтобы запустилось
		while (exit)
		{
			D.Draw();
			cout << "Continue? (0 - exit) \n";
			cin >> exit;
		}
	
}
