//
// Created by diana on 17/12/2020.
//

#include"TowerOfHanoi.h"


TowerOfHanoi::TowerOfHanoi(string name) {
    this->name = name;
}

string TowerOfHanoi::toString() {
    stringstream output;

    output << stack.showStack();
    output << name;

    return output.str();
}

void TowerOfHanoi::fillStack() {
    try {
        for (int init = 0; init < stack.size(); init++) {
            std::ostringstream buff;
            buff << pow((init + 10), (init + 1));
            stack.push_Back(buff.str());
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

Stack<string> TowerOfHanoi::getStack() {
    return stack;
}

void TowerOfHanoi::pushToStack(string number) {
    stack.push(number);
}

string TowerOfHanoi::getElementAtTop() {
    try {
        return stack.top()->getData();
    }
    catch (Node<string>* node) {
        throw "There are no more elements";
    }
}
