﻿#include <iostream>
#include "Game.h"
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); // для слуйсайности
    int grani;
    int vid; // выбор кол-ва граней и вида

    // менюшечка
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
   
    //выбор граней и устанвка их в нужный класс
    switch (grani)
    {
    case 1:
        Game::SetGrani(4);
        break;
    case 2:
        Game::SetGrani(6);
        break;
    case 3:
        Game::SetGrani(8);
        break;
    default:
        Game::SetGrani(4);
        break;
    }
    Game::SetVid(vid-1);
    Game::start(); // передаем настройки игры и запускаем
}

