/*
    stack.hpp

    Include file for stack class
*/

#ifndef STACK_HPP
#define STACK_HPP

#include "linkedList.hpp"

template <class T>
class Stack {
private:
    LinkedList<T> list;

public:
    Stack() {
        LinkedList<T> list;
    }

    ~Stack() {

    }

    void push(T value) {
        list.push(value);
    }

    T pop() {
        return list.pop();
    }

    void print() {
        list.print();
    }

    bool isEmpty() {
        return list.isEmpty();
    }
};

#endif
