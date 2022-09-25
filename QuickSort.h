#ifndef QuickSort_H
#define QuickSort_H
#include <vector>
#include <string>
#include "Sort.h"
class QuickSort : public Sort {
    private:
        std::vector<std::string> sort_vector;
    public:
        QuickSort();
        std::vector<int> sort(std::vector<int> list);
};
#endif