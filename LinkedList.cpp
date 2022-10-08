#include "LinkedList.h"
        LinkedList::LinkedList(){head = new Node;}
        LinkedList::LinkedList(int* array_integers, int length_array){
     //       head = new Node;
            for (int k = 0; k < length_array; k++){
                Node* next_node = new Node;
                next_node->set_pointer()
                next_node->set_data(array_integers[k]);
                next_node->set_pointer();
            }
        }
        // LinkedList::~LinkedList();
        // void LinkedList::addFront(int newItem);
        // void LinkedList::addEnd(int newItem);
        // void LinkedList::addAtPosition(int position, int newItem);
        // int LinkedList::search(int item);
        // void LinkedList::deleteFront();
        // void LinkedList::deleteEnd();
        // void LinkedList::deletePosition(int position);
        // int LinkedList::getItem(int position);
        // void LinkedList::printItems();