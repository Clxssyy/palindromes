/*
    stack.hpp

    Include file for stack class
*/

#ifndef STACK_HPP
#define STACK_HPP

#include "linkedList.hpp"

template <class T, size_t MAXSIZE>
class Stack {
private:
    LinkedList<T> list;
    int size;

public:
    Stack();
    bool push(T value);
    bool pop();
    T top();
    bool isEmpty();
    bool isFull();
};

#endif
