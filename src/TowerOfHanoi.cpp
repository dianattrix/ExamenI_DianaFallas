//
// Created by diana on 17/12/2020.
//

#include"TowerOfHanoi.h"


TowerOfHanoi::TowerOfHanoi(Stack<int> stack) {
    this->stack = stack;
}

void TowerOfHanoi::setStack(Stack<int> stack) {
    this->stack = stack;
}

Stack<int> TowerOfHanoi::getStack() {
    return stack;
}

string TowerOfHanoi::toString() {
    stringstream output;

    output << stack.showStack() << endl;

    return output.str();
}

void TowerOfHanoi::fillStack() {
    try {
        for (int init = 0; init < stack.size(); init++) {
            stack.push(pow((init + 10), (init + 1)));
        }
    }
    catch(char const* message){
        throw message;
    }
}

void TowerOfHanoi::popFromStack() {
    try {
        stack.pop();
    }
    catch (Node<int> *node) {
        if (node == nullptr) {
            throw "Empty stack";
        }
    }
}
