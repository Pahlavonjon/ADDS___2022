#include "ReduceMinimum.h"
#include <vector>
using namespace std;
ReduceMinimum::ReduceMinimum() {this->vector_index = 0;}
int ReduceMinimum::reduce(std::vector<int> The_Vector){
    int vector_size = The_Vector.size();
    if ( vector_size <= 1){
        return The_Vector.at(0);
    }       
    int smallest = binaryOperator(The_Vector.at(0),The_Vector.at(1));
    if (smallest == The_Vector.at(0)){
        The_Vector.erase(The_Vector.begin()+1);
    }
    else {
        The_Vector.erase(The_Vector.begin());
    }
    return reduce(The_Vector);
}
int ReduceMinimum::binaryOperator(int x, int y) {
    if (x <= y)
        return x;
    return y;
}