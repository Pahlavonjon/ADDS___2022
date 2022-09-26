#ifndef QuickSort_H
#define QuickSort_H
#include <vector>
#include <string>
#include "Sort.h"
class QuickSort : public Sort {
    private:
        std::vector<int> sorted_vector;
        int smaller_index;
        int recursion_index;
    public:
        QuickSort();
        std::vector<int> sort(std::vector<int> list);
};
#endif