//
// Created by diana on 17/12/2020.
//

#include"Game.h"

int Game::movements(int levels) {
    if (levels == 1) {
        _movements++;
    } else {
        movements(levels - 1);
        movements(levels - 1);
        _movements++;
    }
    return _movements;
}

void Game::showSolution(int levels, int tower1, int tower2, int tower3) {
    if (levels == 1) {
        cout << "Mover disco de la torre " << tower1 <<
                 " hacia la torre " << tower3 << endl;
    } else {
        showSolution(levels - 1, tower1, tower3, tower2);
        cout << "Mover disco de la torre " << tower1 << " hacia la torre " << tower3 << endl;
        showSolution(levels - 1, tower2, tower1, tower3);
    }
}
