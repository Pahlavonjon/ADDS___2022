#ifndef QuickSort_H
#define QuickSort_H
#include <vector>
#include "Sort.h"
class QuickSort : public Sort {
    public:
        QuickSort();
        std::vector<int> sort(std::vector<int> list);
};
#endif