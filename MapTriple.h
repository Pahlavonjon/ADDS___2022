#ifndef MapTriple_H
#define MapTriple_H
#include <vector>
#include "MapGeneric.h"
class MapTriple : private MapGeneric {
    private:
        unsigned int Vector_Size;
        unsigned int Current_element;
        int f( int x);
    public:
        MapTriple();
        std::vector<int> map(std::vector<int>);
};
#endif