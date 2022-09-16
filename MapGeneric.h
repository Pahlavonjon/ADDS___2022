#ifndef MapGeneric_H
#define MapGeneric_H
#include <vector>
class MapGeneric {
    private:
        virtual int f( int x) = 0;
    public:
        virtual std::vector<int> map(std::vector<int>) = 0;
};
#endif