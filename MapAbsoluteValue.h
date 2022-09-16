#ifndef MapAbsoluteValue_H
#define MapAbsoluteValue_H
#include <vector>
#include "MapGeneric.h"
class MapAbsoluteValue : private MapGeneric {
    private:
        unsigned int Vector_Size;
        unsigned int Current_element;
        int f( int x);
    public:
        MapAbsoluteValue();
        std::vector<int> map(std::vector<int>);
};
#endif