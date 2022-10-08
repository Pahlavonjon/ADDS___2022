#include "LinkedList.h"
        LinkedList::LinkedList(){head = new Node;}
        LinkedList::LinkedList(int* array_integers, int length_array){
     //       head = new Node;
            for (int k = 0; k < length_array; k++){
                Node* next_node = new Node;
                next_node->set_data(array_integers[k]);
                next_node->set_pointer()
                next_node->set_pointer();
            }
        }
        LinkedList::~LinkedList(){}
        void LinkedList::addFront(int newItem){
            Node* next_node = new Node;
            next_node->set_data(newItem);
            next_node->set_pointer(head);
            head = next_node;
        }
        void LinkedList::addEnd(int newItem){

        }
        void LinkedList::addAtPosition(int position, int newItem);
        int LinkedList::search(int item){
            int position = 0;
            if (head->get_data() != item){
                ((head->get_pointer())->get_pointer())
            }
            search_List(head,&item,*position);
            cout << " " << position <<"\n";
            return position;
        }
        Node* search_List(Node* this_node, int* item, int *index){
            if (this_node->get_data() == *item){
                return this_node;
            }
            else if (this_node->get_pointer == nullptr && )
            *index += 1;
            return search_List(this_node->get_pointer(), item, index+1);
        }
        void LinkedList::deleteFront();
        void LinkedList::deleteEnd();
        void LinkedList::deletePosition(int position);
        int LinkedList::getItem(int position);
        void LinkedList::printItems();