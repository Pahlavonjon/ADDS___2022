#include "LinkedList.h" // only node contains the pointer to next node but linked list contain the pointer to the head
#include <cstddef> 
#include <limits>
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
            // delete!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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
            int size_of_list = 0;
            while (temporary->get_pointer() != nullptr){
                temporary = temporary->get_pointer();
                size_of_list++;
            }
            if (position > size_of_list){
                addEnd(newItem);
                return;
            }
            if (position <= 1 || size_of_list <= 1){
                addFront(newItem);
                return;
            }
            temporary = head; // this holds the node which is to be moved up or down
            Node* second_temporary;
            int re_indexing = 0;
            while (temporary->get_pointer() != nullptr){
                second_temporary = temporary;
                temporary = temporary->get_pointer();
                re_indexing++;
                cout << " re_indexing " << re_indexing<< "   " << position <<"\n";
                if (position == re_indexing){
                    Node* new_Node_here = new Node;
                    new_Node_here->set_data(newItem);
                  //  second_temporary->get_pointer() = new_Node_here;
                    new_Node_here->set_pointer(second_temporary->get_pointer());

                }
                    
                if (re_indexing == position-1){
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
            //    cout << "delete end " << length <<"\n";
            }
            temporary = head;
            
            if (length == 1){
                delete temporary->get_pointer();
                temporary->set_pointer(nullptr);
                return;
            }
            int end = length-1;
          //  cout << "\nthe end " << end;
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
              //  cout << " " << linked_list_length;
            }
            temporary_1 = head;
            if (position < 1 || position > linked_list_length)
                return;
         //   cout << "\n";
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
            while (temporary->get_pointer() != nullptr){
                temporary = temporary->get_pointer();
                size++;
                if (position == size){
                    cout << temporary->get_data() << " ";
                    return position;
                }
            }
            cout << std::numeric_limits < int >::max() << " ";
            return std::numeric_limits < int >::max();
        }
        void LinkedList::printItems(){
            Node *temporary = head;
            if (head == NULL)
                cout << "there is no list\n";
            while (temporary != NULL){
                cout << " " << temporary->get_data();
                temporary = temporary->get_pointer();
            }
        }