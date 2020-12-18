//
// Created by diana on 17/12/2020.
//

#ifndef EXAMENL_DIANAFALLAS_MENU_H
#define EXAMENL_DIANAFALLAS_MENU_H

#include"TowerOfHanoi.h"
#include"Game.h"
#include"Utils.h"

class Menu {
private:
    Game game;
    TowerOfHanoi tower1, tower2, tower3;

public:
    void startGame() {
        bool status = true;
        while(status) {
            tower1.setName("Tower 1");
            tower2.setName("Tower 2");
            tower3.setName("Tower 3");

            tower1.fillStack();
            cout << endl << tower1.toString() <<  "\n\n\n\n\n";

            cout << tower2.toString() << "\n\n\n\n\n";
            cout << tower3.toString() <<endl;

            cout << "\t\tChoose one option: " << endl;
            cout << "\t[1] From Tower 1 to Tower 2\n";
            cout << "\t[2] From Tower 1 to Tower 3\n";
            cout << "\t[3] From Tower 2 to Tower 1\n";
            cout << "\t[4] From Tower 2 to Tower 3\n";
            cout << "\t[5] From Tower 3 to Tower 1\n";
            cout << "\t[6] From Tower 3 to Tower 2\n";
            cout << "\t[7] Restart game\n";
            cout << "\t[8] Exit game\n";
            int option;
            option = readInteger();
            switch (option) {
                case 1: {
                    cout << tower1.getElementAtTop();
                    // cout << tower1.getStack().top();
                    // tower2.pushToStack();
                    /*tower1.popFromStack();

                    tower1.fillStack();
                    cout << endl << tower1.toString() <<  "\n\n\n\n\n";

                    cout << tower2.toString() << "\n\n\n\n\n";
                    cout << tower3.toString() <<endl;*/

                    break;
                }

            }
        }
    }

    void showMovements() {
        cout << game.movements(4);
        game.setMovements(0);
    }

    void showSolution() {
        game.showSolution(4, 1, 2, 3);
    }

    static void makeMovement(int option, TowerOfHanoi tower1, TowerOfHanoi tower2, TowerOfHanoi tower3) {

    }

    static void restartGame() {

    }

};

#endif //EXAMENL_DIANAFALLAS_MENU_H
