//
// Created by diana on 17/12/2020.
//

#ifndef EXAMENL_DIANAFALLAS_GAME_H
#define EXAMENL_DIANAFALLAS_GAME_H

#include "TowerOfHanoi.h"

class Game{

private:
    int _movements = 0;
public:

    int movements(int levels);

    void setMovements(int _movements);

    int getMovements();

    static void showSolution(int, int, int, int);
};
#endif //EXAMENL_DIANAFALLAS_GAME_H
