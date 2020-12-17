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
    Stack<string> stack;
    string name;
public:
    TowerOfHanoi() = default;

    explicit TowerOfHanoi(Stack<string> stack, string name);

    void setStack(Stack<string> stack);

    void setName(string name);

    string getName();

    Stack<string> getStack();

    void popFromStack();

    void fillStack();

    string toString();

    ~TowerOfHanoi() = default;

};

#endif //EXAMENL_DIANAFALLAS_TOWEROFHANOI_H
