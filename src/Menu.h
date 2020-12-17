//
// Created by diana on 17/12/2020.
//

#ifndef EXAMENL_DIANAFALLAS_MENU_H
#define EXAMENL_DIANAFALLAS_MENU_H
#include"TowerOfHanoi.h"
#include"Game.h"

class Menu{
public:
    static void makeMovement(int option, TowerOfHanoi tower1,TowerOfHanoi tower2, TowerOfHanoi tower3);

    static void restartGame();

};

#endif //EXAMENL_DIANAFALLAS_MENU_H
