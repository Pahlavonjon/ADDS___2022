#ifndef FilterForTwoDigitPositive_H
#define FilterForTwoDigitPositive_H
#include "FilterGeneric.h"
#include <vector>
class FilterForTwoDigitPositive : private FilterGeneric {
    private:
        int Vector_Size;
        int Current_element;
        bool g(int x);
    public:
        FilterForTwoDigitPositive();
        std::vector<int> filter(std::vector<int> The_Vector);
};
#endif