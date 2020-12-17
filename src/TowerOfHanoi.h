//
// Created by diana on 17/12/2020.
//

#ifndef EXAMENL_DIANAFALLAS_TOWEROFHANOI_H
#define EXAMENL_DIANAFALLAS_TOWEROFHANOI_H

#include<iostream>
#include<sstream>
#include"math.h"
#include<Stack.h>

using namespace std;

class TowerOfHanoi {
private:
    int movements = 0;
    Stack<int> stack;
public:
    TowerOfHanoi() = default;

    explicit TowerOfHanoi(Stack<int> stack);

    void setStack(Stack<int> stack);

    Stack<int> getStack();

    void fillStack();

    int calculateMovements();

    string toString();

    ~TowerOfHanoi() = default;

};

#endif //EXAMENL_DIANAFALLAS_TOWEROFHANOI_H
