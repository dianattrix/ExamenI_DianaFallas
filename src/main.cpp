//
// Created by diana on 17/12/2020.
//

#include"TowerOfHanoi.h"

int main() {

    cout << "Ingrese el tamano";
    int t;
    cin >> t;

    Stack<int> stack(t);

    TowerOfHanoi tower(stack);
    try {
        tower.fillStack();
    }

    catch (char const *m) {
        cout << m;
    }

    try { tower.getStack().pop(); }
    catch (Node<int> *node) {
        cout << "ss";
    }*/
    cout << tower.toString();
    return 0;
}
/*
#include<iostream>
using namespace std;

void Jugada(int disco, int torre1, int torre2, int torre3){
    if(disco == 1){
        cout << "Mover disco de la torre " << torre1 <<
             " hacia la torre " << torre3 << endl;
    }
    else{
        Jugada(disco-1, torre1, torre3, torre2);
        cout << "Mover disco de la torre " << torre1 << " hacia la torre " << torre3 << endl;
        Jugada(disco-1, torre2, torre1, torre3);
    }
}

int main(){

    int torre1 =1, torre2 = 2, torre3 = 3, disco = 0;
    cout << "con cuantos discos quiere jugar" << endl;
    cin >> disco;
    Jugada(disco, torre1, torre2, torre3);
}*/
