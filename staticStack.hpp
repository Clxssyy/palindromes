/*
    staticStack.hpp

    Include file for staticStack class
*/

#ifndef STATICSTACK_HPP
#define STATICSTACK_HPP

#include "LinkedList.hpp"

template <class T, int MAXSIZE>
class StaticStack {
private:
    LinkedList<T> list;
    int size;

public:
    StaticStack();
    bool push(T value);
    bool pop();
    T top();
    bool isEmpty();
    bool isFull();
};

#endif
