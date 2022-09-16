#ifndef ReduceGeneric_H
#define ReduceGeneric_H
#include <vector>
class ReduceGeneric {
    private:
        virtual int binaryOperator(int x, int y) = 0;
    public:
        virtual int reduce(std::vector<int> The_vector) = 0;
};
#endif