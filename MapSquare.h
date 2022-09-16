#ifndef MapSquare_H
#define MapSquare_H
#include <vector>
#include "MapGeneric.h"
class MapSquare : private MapGeneric {
    private:
        unsigned int Vector_Size;
        unsigned int Current_element;
        int f( int x);
    public:
        MapSquare();
        std::vector<int> map(std::vector<int>);
};
#endif