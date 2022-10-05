#ifndef RecursiveBinarySearch_H
#define RecursiveBinarySearch_H
#include <vector>
class RecursiveBinarySearch {
    private:
        std::vector<int> The_Vector;
    public:
        RecursiveBinarySearch();
        bool search(std::vector<int> The_Vector, int get_me_this_number);
};
#endif