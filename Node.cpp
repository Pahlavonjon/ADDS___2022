#include "Node.h"
#include <cstddef> 
    Node::Node(){
        this->next_node = NULL; 
        this->data = 0;
    }
    void Node::set_data(int new_data){
        this->data = new_data; 
        this->next_node = NULL;
    }
    void Node::set_pointer(Node* next_node){
        this->next_node = next_node;
    }
    int Node::get_data(){
        return data;
    }
    Node* Node::get_pointer(){
        return next_node;
    }