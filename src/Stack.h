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
    int height = 4;
public:
    Stack() = default;

    void push(Template object);

    void push_Back(Template object);

    void pop();

    List<Template> getList();

    Node<Template> *top();

    string showStack();

    int size();

    bool empty();
};

template<class Template>
void Stack<Template>::push(Template object) {
    if (list.getSize() < height) {
        list.addTop(object);
    } else {
        throw "There are no more space";
    }
}

template<class Template>
inline void Stack<Template>::push_Back(Template object)
{
    if (list.getSize() < height) {
        list.addEnd(object);
    }
    else {
        throw "There are no more space";
    }
}

template<class Template>
void Stack<Template>::pop() {
    try {
        list.deleteLast();
    }
   catch (Node<Template> *node) {
        if (node == nullptr) {
            throw node;
        }
    }
}

template<class Template>
inline List<Template> Stack<Template>::getList()
{
    return list;
}

template<class Template>
Node<Template> *Stack<Template>::top() {
    if (list.getHead() == nullptr) {
        throw list.getHead();
    }
    else {
        return list.getHead();
    }
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
string Stack<Template>::showStack() {
    stringstream output;
    Node<Template> *iterator;

    for(iterator = list.getHead(); iterator != NULL; iterator = iterator->next) {
        output << iterator->getData() << endl;
    }
    return output.str();
}

#endif //EXAMENL_DIANAFALLAS_STACK_H
