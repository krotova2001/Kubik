#include <iostream>
using namespace std;
#include "Game.h"
#include <ctime>

int main()
{
    srand(time(0));
    int grani;
    int vid; // выбор кол-ва граней и вида
    cout << "Hi please, choose a cube!\n";
    cout << "1 - four \n";
    cout << "2 - six \n";
    cout << "3 - eight \n";
    cin >> grani;
    cout << "Now please, choose a view!\n";
    cout << "1 - usual \n";
    cout << "2 - cube \n";
    cin >> vid;
    system("cls");
   
    Game::SetGrani(grani);
    Game::SetVid(vid);
    Game::start(); // передаем настройки игры и запускаем
}

