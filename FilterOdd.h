#ifndef FilterOdd_H
#define FilterOdd_H
#include "FilterGeneric.h"
#include <vector>
class FilterOdd : private FilterGeneric {
    private:
        int Vector_Size;
        int Current_element;
        bool g(int x);
    public:
        FilterOdd();
        std::vector<int> filter(std::vector<int> The_Vector);
};
#endif