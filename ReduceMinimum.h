#ifndef ReduceMinimum_H
#define ReduceMinimum_H
#include "ReduceGeneric.h"
#include <vector>
class ReduceMinimum {
    private:
        int binaryOperator(int x, int y); // takes the first 2 numbers from the vector, and calculates the smallest number and compraes it with the next element in the vector
        int vector_index;
    public:
        ReduceMinimum();
        int reduce(std::vector<int> The_vector);
};
#endif