#ifndef LinkedList_H
#define LinkedList_H
#include "Node.h"
class LinkedList {
    private:
        Node* head;
        Node* next_node;
    public:
        LinkedList();
        LinkedList(int* array_integers, int length_array);
        ~LinkedList();
        void addFront(int newItem);
        void addEnd(int newItem);
        void addAtPosition(int position, int newItem);
        int search(int item);
        void deleteFront();
        void deleteEnd();
        void deletePosition(int position);
        int getItem(int position);
        void printItems();
};
#endif