//
// Created by diana on 17/12/2020.
//

#ifndef EXAMENL_DIANAFALLAS_LIST_H
#define EXAMENL_DIANAFALLAS_LIST_H

#include<iostream>
#include"Node.h"

using namespace std;

template<class T>

class List {
public:
    List();

    ~List();

    void addTop(T);

    void addEnd(T);

    int getSize();

    void deleteLast();

    Node<T> *getNextObject();

    Node<T> *getHead();


private:
    Node<T> *m_head;
    int size = 0;
};

template<typename T>
List<T>::List() {
    m_head = NULL;
}

template<typename T>
void List<T>::addTop(T data_) {
    Node<T> *new_node = new Node<T>(data_);
    Node<T> *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        new_node->next = m_head;
        m_head = new_node;

        while (temp) {
            temp = temp->next;
        }
    }
    size++;
}


template<typename T>
void List<T>::addEnd(T data_) {
    Node<T> *new_node = new Node<T>(data_);
    Node<T> *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    size++;
}

template<typename T>
void List<T>::deleteLast() {
    
    Node<T> *temp = m_head;
    m_head = m_head->getNext();
    size--;
    delete temp;
    throw m_head;
}

template<class T>
Node<T> *List<T>::getHead() {
    return m_head;
}

template<typename T>
List<T>::~List() {}

template<class T>
int List<T>::getSize() {
    return size;
}

template<class T>
Node<T> *List<T>::getNextObject() {
    return m_head->next;
}


#endif //EXAMENL_DIANAFALLAS_LIST_H
