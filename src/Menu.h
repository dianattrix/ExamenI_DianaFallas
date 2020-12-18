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

        int movements = 0;
        int availableMovements = game.movements(tower1.getStack().size());
        tower1.setName("Tower 1");
        tower2.setName("Tower 2");
        tower3.setName("Tower 3");

        try {
            tower1.fillStack();
        }
        catch (const char* message) {
            cout << message;
        }

        while (status) {
           
            
            cout << endl << tower1.toString() << "\n\n\n\n\n";
            cout << tower2.toString() << "\n\n\n\n\n";
            cout << tower3.toString() << endl << endl;
            cout << "Movements: " << movements << " of " << availableMovements << endl;

            
                 
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
            system("cls");

            switch (option) {
            case 1:
                try {
                    if (movements < availableMovements)
                    {
                        tower2.pushToStack(tower1.getElementAtTop());
                        movements++;
                        tower1.popFromStack();
                    }
                    else {
                        cout << "Game over";
                    }
                }
                catch (Node<string>* node) {
                    cerr << "Empty stack";
                }
                catch (const char* message) {
                    cout << message;
                }
                break;
            case 2:
                try {
                    if (movements < availableMovements) {
                        tower3.pushToStack(tower1.getElementAtTop());
                        movements++;
                        tower1.popFromStack();
                    }
                    else {
                        cout << "Game over";
                    }
                }
                catch (Node<string>* node) {
                    cerr << "Empty stack";
                }
                catch (const char* message) {
                    cout << message;
                }
                break;
            case 3:
                try {
                    if (movements < availableMovements){
                        tower1.pushToStack(tower2.getElementAtTop());
                        movements++;
                        tower2.popFromStack();
                    }
                    else {
                        cout << "Game over";
                    }
                }
                catch (Node<string>* node) {
                    cerr << "Empty stack";
                }
                catch (const char* message) {
                    cout << message;
                }
                break;
                break;
            case 4:
                try {
                    if (movements < availableMovements) {
                        tower3.pushToStack(tower2.getElementAtTop());
                        movements++;
                        tower2.popFromStack();
                    }
                    else {
                        cout << "Game over";
                    }
                }
                catch (Node<string>* node) {
                    cerr << "Empty stack";
                }
                catch (const char* message) {
                    cout << message;
                }
                break;
            case 5:
                try {
                    if (movements < availableMovements) {
                        tower1.pushToStack(tower3.getElementAtTop());
                        movements++;
                        tower3.popFromStack();
                    }
                    else {
                        cout << "Game over";
                    }
                }
                catch (Node<string>* node) {
                    cerr << "Empty stack";
                }
                catch (const char* message) {
                    cout << message;
                }
                break;
            case 6:
                try {
                    if (movements < availableMovements) {
                        tower2.pushToStack(tower3.getElementAtTop());
                        movements++;
                        tower3.popFromStack();
                    }
                    else {
                        cout << "Game over";
                    }
                }
                catch (Node<string>* node) {
                    cerr << "Empty stack";
                }
                catch (const char* message) {
                    cout << message;
                }
                break;
            case 7:

                try {
                    while (tower1.getStack().getList().getHead() != nullptr) {
                        tower1.popFromStack();
                    }
                }
                catch (Node<string>* node) {
                    cout << "Empty stack";
                }

                try {
                    while (tower2.getStack().getList().getHead() != nullptr) {
                        tower2.popFromStack();
                    }
                }
                catch (Node<string>* node) {
                    cout << "Empty stack";
                }

                try {
                    while (tower3.getStack().getList().getHead() != nullptr) {
                        tower3.popFromStack();
                    }
                }
                catch (Node<string>* node) {
                    cout << "Empty stack";
                }
                
                tower1.fillStack();
                break;
            case 8:
                status = false;
                break;
            default:
                cerr << "Incorrect input, please try again..." << endl;
                break;
            }
        }
    }

    void showMovements() {
        cout << game.movements(tower1.getStack().size());
        game.setMovements(0);
    }

    void showSolution() {
        game.showSolution(tower1.getStack().size(), 1, 2, 3);
    }

};

#endif //EXAMENL_DIANAFALLAS_MENU_H
