/*
    linkedList.cpp

    Implementation file for linkedList class
*/

#include "linkedList.hpp"

template <class T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template <class T>
LinkedList<T>::~LinkedList() {
    Node *current = head;
    while (current != nullptr) {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}

template <class T>
void LinkedList<T>::addNode(T value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

template <class T>
void LinkedList<T>::deleteNode(T value) {
    Node *current = head;
    Node *previous = nullptr;
    while (current != nullptr && current->value != value) {
        previous = current;
        current = current->next;
    }
    if (current != nullptr) {
        if (previous == nullptr) {
            head = current->next;
        } else {
            previous->next = current->next;
        }
        delete current;
    }
}
