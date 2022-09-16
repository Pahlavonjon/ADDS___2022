#ifndef ReduceGCD_H
#define ReduceGCD_H
#include "ReduceGeneric.h"
#include <vector>
class ReduceGCD {
    private:
        int binaryOperator(int x, int y);
    public:
        ReduceGCD();
        int reduce(std::vector<int> The_vector);
};
#endif