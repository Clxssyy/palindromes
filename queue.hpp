/*
    queue.hpp

    Include file for Queue class
*/

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>

template <class T>
class Queue {
private:
    int front;
    int rear;
    int size;
    int items;
    T *arr;

public:
    Queue(int s) {
        front = 0;
        rear = 0;
        size = s;
        items = 0;
        arr = new T[s];
    }

    ~Queue() {
        if (items > 0) {
            delete[] arr;
        }
    }

    void enQueue(T value) {
        if (items < size) {
            arr[rear] = value;
            rear++;
            items++;
        } else {
            std::cerr << "Error: Queue is full" << std::endl;
        }
    }

    T deQueue() {
        if (isEmpty()) {
            std::cerr << "Error: Queue is empty" << std::endl;
            return T();
        } else {
            T item = arr[front];
            front++;
            items--;
            return item;
        }
    }

    void print() {
        if (isEmpty()) {
            std::cerr << "Error: Queue is empty" << std::endl;
        }
        else {
            std::cout << "Elements in the queue are:" << std::endl;
            for (int i = front; i <= rear; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
    }

    bool isEmpty() {
        if (items == 0) {
            return true;
        }
        return false;
    }
};

#endif
