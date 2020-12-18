//
// Created by diana on 17/12/2020.
//

#include"Menu.h"
#include"Utils.h"

int main() {

    bool status = true;
    Menu menu;

    while (status) {
        cout << "\t\tWelcome to Towers of Hanoi" << endl << endl;
        cout << "Choose one option: " << endl;
        cout << "\t[1] Start game\n\t[2] Minimum movements to win\n\t[3] Show solution\n\t[4] Exit game\n";
        int option;
        option = readInteger();
        switch (option) {
            case 1:
                menu.startGame();
                system("pause");
                system("cls");
                break;
            case 2:
                cout << "The minimum movements to win are: ";
                menu.showMovements();
                system("pause");
                system("cls");
                break;
            case 3:
                menu.showSolution();
                system("pause");
                system("cls");
                break;
            case 4:
                status = false;
                system("pause");
                system("cls");
                break;
            default:
                cerr << "Incorrect input, please try again" << endl;
                system("pause");
                system("cls");
                break;
        }
    }

    return 0;
}