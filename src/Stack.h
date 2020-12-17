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

    int size();

    bool empty();
};

template<class Template>
void Stack<Template>::push(Template object) {
    if (list.getSize() < height) {
        list.addTop(object);
    } else {
        throw "There are no more movements";
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
    return list.getSize();
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

#endif //EXAMENL_DIANAFALLAS_STACK_H
