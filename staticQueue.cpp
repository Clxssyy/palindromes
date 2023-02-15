/*
    staticQueue.cpp

    Implementation file for staticQueue class
*/

#include <iostream>
#include "queue.hpp"

Queue::Queue(int s) {
    front = -1;
    rear = -1;
    size = s;
    arr = new int[s];
}

Queue::~Queue() {
    delete[] arr;
}

template <class T>
void Queue::enQueue(T value) {
    if (rear == size - 1) {
        std::cout << "Queue is full" << std::endl;
    }
    else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
    }
}

void Queue::deQueue() {
    if (front == -1) {
        std::cout << "Queue is empty" << std::endl;
    }
    else {
        std::cout << "Removed " << arr[front] << std::endl;
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void Queue::display() {
    if (front == -1) {
        std::cout << "Queue is empty" << std::endl;
    }
    else {
        std::cout << "Elements in the queue are:" << endl;
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << endl;
        }
    }
}
