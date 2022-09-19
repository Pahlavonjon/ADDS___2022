#include "BubbleSort.h"
#include <vector>
BubbleSort::BubbleSort(){} // new static int;
std::vector<int> BubbleSort::sort(std::vector<int> list){
    for (unsigned int k = 0; k < list.size(); k++){
        for (unsigned int j = 0; j < list.size(); j++){
            if (list.at(k) < list.at(j)){
                int large = list.at(j);
                int small = list.at(k);
                list.at(j) = small;
                list.at(k) = large;
            }
        }
    }
    return list;
}