#include "ReduceMinimum.h"
#include <vector>
using namespace std;
ReduceMinimum::ReduceMinimum() {this->vector_index = 0;}
int ReduceMinimum::reduce(std::vector<int> The_Vector){
    int vector_size = The_Vector.size();
    if ( vector_size <= 1){
        return The_Vector.at(0);
    }
    The_Vector.at(0) = binaryOperator(The_Vector.at(vector_index),The_Vector.at(vector_index+1));
    if (The_Vector.at(0) == The_Vector.at(vector_index)){
        The_Vector.erase(The_Vector.begin()+(vector_index+1));
    }
    else {
        The_Vector.erase(The_Vector.begin()+(vector_index));
    }
    return reduce(The_Vector);
}
int ReduceMinimum::binaryOperator(int x, int y) {
    if (x <= y)
        return x;
    return y;
}