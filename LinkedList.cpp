#include "LinkedList.h" // only node contains the pointer to next node but linked list contain the pointer to the head
#include <cstddef> 
#include <limits>
#include <iostream>
using namespace std;
        LinkedList::LinkedList(){head = nullptr;}
        LinkedList::LinkedList(int* array_integers, int length_array){
          head = nullptr;
            for (int k = 0; k < length_array; k++){
                addEnd(array_integers[k]);
            }
        }
        LinkedList::~LinkedList(){
            // if (head == nullptr)
            //     return;
            // Node *temporary = head;
            // int size = 1;
            // while (temporary->get_pointer() != nullptr){
            //     temporary = temporary->get_pointer();
            //     size++;
            // }
            // vector<Node*> pointers = new *Node[size];
            // size = 0;
            // temporary = head;
            // while (temporary->get_pointer() != nullptr){
            //     pointer.at(size) = temporary->get_pointer();
            //     temporary = temporary->get_pointer();
            // }
            // delete pointers;

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
            Node* new_Node_here = new Node;
            new_Node_here->set_data(newItem);
            if (position <= 1){
                addFront(newItem);
                return;
            }
            Node* second_temporary = head;
            for(int i=0; i<position-2; i++){
                second_temporary=second_temporary->get_pointer();
            }
            new_Node_here->set_pointer(second_temporary->get_pointer());
            second_temporary->set_pointer(new_Node_here);
        }
        int LinkedList::search(int item){
            int position = 0;
            if (head->get_data() != item){
                ((head->get_pointer())->get_pointer());
            }
            cout << " " << position <<"\n";
            return position;
        }
        void LinkedList::deleteFront(){
            Node* temporary = head;
            head = temporary->get_pointer();
            delete temporary;
            return;
        }
        void LinkedList::deleteEnd(){
            Node* temporary = head;
            if (temporary->get_pointer() == nullptr){
                head = nullptr;
                return;
            }
            int length = 0;
            while (temporary->get_pointer() != nullptr){
                temporary = temporary->get_pointer();
                length++;
            }
            temporary = head;
            if (length == 1){
                delete temporary->get_pointer();
                temporary->set_pointer(nullptr);
                return;
            }
            int end = length-1;
            length = 0;
            while (temporary->get_pointer() != nullptr){
                temporary = temporary->get_pointer();
                length++;
                if (length == end){
                    delete temporary->get_pointer();
                    temporary->set_pointer(nullptr);
                    return;
                }
            }
        }
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
            temporary_1 = head;
            if (position < 1 || position > linked_list_length)
                return;
            if (linked_list_length < position || linked_list_length < 1)
                cout << "outside range";
            if (position == 1){
                head = head->get_pointer();
                delete temporary_1;
                return;
            }
            if (position == linked_list_length){
                deleteEnd();
                return;
            }
            while (position-- > 1){
                temporary_2 = temporary_1;
                temporary_1 = temporary_1->get_pointer();
            }
            temporary_2->set_pointer(temporary_1->get_pointer());
            delete temporary_1;
        }
        int LinkedList::getItem(int position){
            Node* temporary = head;
            int size = 0;
            if (position == 1){
                cout << temporary->get_data() << " ";
                return position;
            }
            while (temporary->get_pointer() != nullptr){
                temporary = temporary->get_pointer();
                size++;
                if (position-1 == size){
                    cout << temporary->get_data() << " ";
                    return position;
                }
            }
            cout << std::numeric_limits < int >::max() << " ";
            return std::numeric_limits < int >::max();
        }
        void LinkedList::printItems(){
            Node *temporary = head;
            bool start = true;
            if (head == NULL)
                cout << "there is no list\n";
            while (temporary != NULL){
                if (start == true){
                    cout << temporary->get_data();
                    start = false;
                }
                else {
                cout << " " << temporary->get_data();
                }
                temporary = temporary->get_pointer();
            }
        }