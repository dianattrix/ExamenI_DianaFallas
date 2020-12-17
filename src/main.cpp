//
// Created by diana on 17/12/2020.
//

#include"TowerOfHanoi.h"

int main() {

    cout << "Ingrese el tamano";
    int t;
    cin >> t;

    Stack<int> stack(t);

    stack.push(10);
    stack.push(12);

    cout << stack.showStack();

    stack.pop();

    cout <<stack.showStack();

    //**************************

    cout << "Ingrese el tamano" << endl;
    int tam; cin >> tam;
    Stack<int> stack2(tam);
    TowerOfHanoi tower(stack2);
    tower.fillStack();
    cout << tower.toString();
    tower.popFromStack();
    cout << tower.toString();


    return 0;
}
/*
#include<iostream>
using namespace std;

void Jugada(int disco, int torre1, int torre2, int torre3){
           cout << "Mover disco de la torre " << torre1 <<
             " hacia la torre " << torre3 << endl;
 if(disco == 1){
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
