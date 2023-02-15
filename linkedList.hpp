/*
    linkedList.hpp

    Include file for LinkedList class
*/

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

template <class T>
class LinkedList {
private:
    struct Node {
        T value;
        Node *next;
        Node(T nodeValue) : value(nodeValue), next(nullptr) {}
    };
    Node *head;

public:
    LinkedList();
    ~LinkedList();

    void addNode(T value);
    void deleteNode(T value);
};

#endif
