#include "LinkedList.h" // only node contains the pointer to next node but linked list contain the pointer to the head
#include <cstddef> 
#include <iostream>
using namespace std;
        LinkedList::LinkedList(){head = nullptr;}
        LinkedList::LinkedList(int* array_integers, int length_array){
          head = nullptr;
            for (int k = 0; k < length_array; k++){
                // Node* next_node = new Node;
                // next_node->set_data(array_integers[k]);
                // next_node->set_pointer(head);
                // head = next_node;
                addEnd(array_integers[k]);
            }
        }
        LinkedList::~LinkedList(){

        }
        void LinkedList::addFront(int newItem){
            Node* next_node = new Node;
            next_node->set_data(newItem);
            next_node->set_pointer(head);
            head = next_node;
        }
        void LinkedList::addEnd(int newItem){
            Node* new_Node = new Node;
            new_Node->set_data(newItem);

            if (head == NULL){
                head = new_Node;
                return;
            }

            Node *temporary = head;
            while (temporary->get_pointer() != nullptr){
                temporary = temporary->get_pointer();
            }
            temporary->set_pointer(new_Node);

        }
        void LinkedList::addAtPosition(int position, int newItem){
            
            Node *temporary = head;
            int size_of_list = 1;
            while (temporary->get_pointer() != nullptr){
                temporary = temporary->get_pointer();
                size_of_list++;
            }
            if (position > size_of_list){
                addEnd(newItem);
                return;
            }
            else if (position < 1){
                addFront(newItem);
                return;
            }
            temporary = head;
            int re_indexing = 0;
            while (temporary->get_pointer() != nullptr){
                temporary = temporary->get_pointer();
                re_indexing++;
                cout << " re_indexing " << re_indexing<< "   " << position <<"\n";
                if (re_indexing == position){
                    Node* new_Node_here = new Node;
                    new_Node_here->set_data(newItem);
                    new_Node_here->set_pointer(temporary->get_pointer());
                    temporary->set_pointer(new_Node_here);
                    return;
                }
            }
        }
        int LinkedList::search(int item){
            int position = 0;
            if (head->get_data() != item){
                ((head->get_pointer())->get_pointer());
            }
          //  search_List(head,&item,*position);
            cout << " " << position <<"\n";
            return position;
        }
        // Node* search_List(Node* this_node, int* item, int *index){
        //     if (this_node->get_data() == *item){
        //         return this_node;
        //     }
        //     else if (this_node->get_pointer == nullptr )
        //         *index += 1;
        //     return search_List(this_node->get_pointer(), item, index+1);
        // }
        void LinkedList::deleteFront(){}
        void LinkedList::deleteEnd(){}
        void LinkedList::deletePosition(int position){
            Node* temporary_1 = head; 
            Node* temporary_2 = nullptr;
            int linked_list_length = 0;
            if (head == nullptr)
                return;
            while (temporary_1 != nullptr){
                temporary_1 = temporary_1->get_pointer();
                linked_list_length++;
            }
            if (linked_list_length < position || linked_list_length < 1)
                cout << "outside range";
            if (position == 1){
                head = head->get_pointer();
                delete temporary_1;
                return;
            }
            while (position-- > 1){
                temporary_2 = temporary_1;
                temporary_1 = temporary_1->get_pointer();
            }
            Node* pointer;
            pointer = temporary_2->get_pointer(); 
            pointer = temporary_1->get_pointer();
            delete temporary_1;
        }
        int LinkedList::getItem(int position){return position;}
        void LinkedList::printItems(){
            Node *temporary = head;

            if (head == NULL)
                cout << "there is no list\n";
            while (temporary != NULL){
                cout << " " << temporary->get_data();
                temporary = temporary->get_pointer();
            }

        }