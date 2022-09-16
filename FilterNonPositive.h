#ifndef FilterNonPositive_H
#define FilterNonPositive_H
#include "FilterGeneric.h"
#include <vector>
class FilterNonPositive : private FilterGeneric {
    private:
        int Vector_Size;
        int Current_element;
        bool g(int x);
    public:
        FilterNonPositive();
        std::vector<int> filter(std::vector<int> The_Vector);
};
#endif