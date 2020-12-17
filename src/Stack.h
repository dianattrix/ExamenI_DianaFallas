//
// Created by diana on 17/12/2020.
//

#ifndef EXAMENL_DIANAFALLAS_STACK_H
#define EXAMENL_DIANAFALLAS_STACK_H

#include"List.h"

template<class Template>
class Stack {
private:
    List<Template> list;
    int height = 0;
public:
    Stack() = default;

    Stack(int size);

    void push(Template object);

    void pop();

    Node<Template> *top();

    string showStack();

    int size();

    bool empty();
};

template<class Template>
void Stack<Template>::push(Template object) {
    if (list.getSize() < height) {
        list.addEnd(object);
    } else {
        throw "There are no more space";
    }
}

template<class Template>
void Stack<Template>::pop() {
    try {
        list.deleteFirst();
    }
   catch (Node<Template> *node) {
        if (node == nullptr) {
            throw node;
        }
    }
}

template<class Template>
Node<Template> *Stack<Template>::top() {
    if (list.getHead() == nullptr) {
        throw list.getHead();
    }
    return list.getHead();
}

template<class Template>
int Stack<Template>::size() {
    return height;
}

template<class Template>
bool Stack<Template>::empty() {
    if (list.getSize() == 0) {
        return true;
    }
    return false;
}

template<class Template>
Stack<Template>::Stack(int size) {
    this->height = size;
}

template<class Template>
string Stack<Template>::showStack() {
    stringstream output;
    Node<Template> *iterator;

    for(iterator = list.getHead(); iterator != NULL; iterator = iterator->next) {
        output << iterator->data << endl;
    }
    return output.str();
}

#endif //EXAMENL_DIANAFALLAS_STACK_H
