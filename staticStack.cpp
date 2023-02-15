/*
    staticStack.cpp

    Implementation file for staticStack class
*/

#include "staticStack.hpp"

template <class T, int MAXSIZE>
Stack<T, MAXSIZE>::Stack() : size(0) {}

template <class T, int MAXSIZE>
bool Stack<T, MAXSIZE>::push(T value) {

    if (isFull()) {
        return false;
    }
    list.addNode(value);
    size++;
    return true;
}

template <class T, int MAXSIZE>
bool Stack<T, MAXSIZE>::pop() {

    if (isEmpty()) {
        return false;
    }
    list.deleteNode(list.top());
    size--;
    return true;
}

template <class T, int MAXSIZE>
T Stack<T, MAXSIZE>::top() {

    if (isEmpty()) {
        return T();
    }
    return list.top();
}

template <class T, int MAXSIZE>
bool Stack<T, MAXSIZE>::isEmpty() {

    return size == 0;
}

template <class T, int MAXSIZE>
bool Stack<T, MAXSIZE>::isFull() {

    return size == MAXSIZE;
}
