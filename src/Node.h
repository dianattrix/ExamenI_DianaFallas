//
// Created by diana on 17/12/2020.
//

#ifndef EXAMENL_DIANAFALLAS_NODE_H
#define EXAMENL_DIANAFALLAS_NODE_H

template<class T>
class Node {

public:
    Node();

    Node(T);

    ~Node();

    T getData();

    Node *next;
    T data;

    Node *getNext();

    void setNext(Node *next);

    void delete_all();
};

template<typename T>
Node<T>::Node() {
    data = NULL;
    next = NULL;
}

template<typename T>
Node<T>::Node(T data_) {
    data = data_;
    next = NULL;
}

template<typename T>
void Node<T>::delete_all() {
    if (next)
        next->delete_all();
    delete this;
}

template<typename T>
Node<T>::~Node() {}

template<class T>
Node<T> *Node<T>::getNext() {
    return next;
}

template<class T>
void Node<T>::setNext(Node *next) {
    this->next = next;
}

template<class T>
T Node<T>::getData() {
    return data;
}

#endif //EXAMENL_DIANAFALLAS_NODE_H
