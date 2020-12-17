//
// Created by diana on 17/12/2020.
//

#include"TowerOfHanoi.h"


TowerOfHanoi::TowerOfHanoi(Stack<string> stack, string name) {
    this->stack = stack;
    this->name = name;
}

void TowerOfHanoi::setStack(Stack<string> stack) {
    this->stack = stack;
}

Stack<string> TowerOfHanoi::getStack() {
    return stack;
}

string TowerOfHanoi::toString() {
    stringstream output;

    output << stack.showStack() << endl;
    output << name;

    return output.str();
}

void TowerOfHanoi::fillStack() {
    try {
        for (int init = 0; init < stack.size(); init++) {
            std::ostringstream buff;
            buff << pow((stack.size() + 10), (stack.size() + 1));
            stack.push(buff.str());
        }
    }
    catch (char const *message) {
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

void TowerOfHanoi::setName(string name) {
    this->name = name;
}

string TowerOfHanoi::getName() {
    return name;
}
