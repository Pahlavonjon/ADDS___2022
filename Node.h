#ifndef Node_H
#define Node_H
class Node {
    private:
        int data;
        Node* pointer_node;
    public:
        Node();
        void set_data(int new_data);
        void set_pointer(Node* next_node);
        int get_data();
        Node* get_pointer();
};
#endif