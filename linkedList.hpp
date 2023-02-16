/*
    linkedList.hpp

    Include file for LinkedList class
*/

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(nullptr) {}
    };
    Node* head;

public:
    // Constructor
    LinkedList() : head(nullptr) {}

    // Deconstructor
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    // Add a node to the front of the list
    void push(T data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {
            head = new_node;
        } else {
            new_node->next = head;
            head = new_node;
        }
    }

    // Remove a node from the front of the list
    T pop() {
        if (head == nullptr) {
            std::cerr << "Error: List is empty" << std::endl;
            return T();
        } else {
            T value = head->data;
            Node* current = head;
            head = current->next;
            delete current;
            return value;
        }
    }

    // Print out all values inside the list
    void print() const {
        if (head == nullptr) {
            std::cerr << "Error: List is empty" << std::endl;
            return;
        }
        Node* current = head;
        std::cout << "Items in the list are: \n";
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Check if the list is empty
    bool isEmpty() {
        if (head == nullptr) {
            return true;
        } else {
            return false;
        }
    }
};

#endif
