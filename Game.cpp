#include "Game.h"
int Game::grani=0;
int Game::vid=0;
void Game::start()
{
		Decorator D(vid);
		int exit;
		cin >> exit;
		while (exit)
		{
			D.Draw();
			cout << "Continue? (0-exit)";
		}
	
}
