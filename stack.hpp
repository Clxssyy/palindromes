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
    // Constructor
    Stack() {
        LinkedList<T> list;
    }

    // Deconstructor
    ~Stack() {
        // Should use LinkedList deconstructor
    }

    // Push a value onto the stack
    void push(T value) {
        list.push(value);
    }

    // Pop a value off the stack
    T pop() {
        return list.pop();
    }

    // Print out the values on the stack
    void print() {
        list.print();
    }

    // Check if the stack is empty
    bool isEmpty() {
        return list.isEmpty();
    }
};

#endif
