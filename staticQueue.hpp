/*
    staticQueue.hpp

    Include file for staticQueue class
*/

#ifndef STATICQUEUE_HPP
#define STATICQUEUE_HPP

template <class T>
class Queue {
    private:
        int front, rear, size;
        int *arr;
    public:
        Queue(int s);
        ~Queue();
        void enQueue(T value);
        void deQueue();
        void display();
};

#endif
