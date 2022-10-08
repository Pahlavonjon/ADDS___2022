#include "Node.h"
    Node::Node(){next_node = nullptr;}
    void Node::set_data(int new_data){this->data = new_data;}
    void Node::set_pointer(Node* next_node){this->next_node = next_node;}
    int Node::get_data(){return data;}
    Node* Node::get_pointer(){return next_node;}