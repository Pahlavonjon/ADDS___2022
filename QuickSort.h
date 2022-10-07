#ifndef QuickSort_H
#define QuickSort_H
#include <vector>
#include <string>
#include "Sort.h"
class QuickSort : public Sort {
    private:
        std::vector<int> sorted_vector;
        int low;
        int high;
        int low_b;
        int high_b;
        int start;
        int helper(std::vector<int> list, int low, int high, int pivot);
    public:
        QuickSort();
        std::vector<int> sort(std::vector<int> list);
};
#endif