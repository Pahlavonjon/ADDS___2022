#include "BubbleSort.h"
#include <vector>
using namespace std;
BubbleSort::BubbleSort(){} // new static int;
BubbleSort::vector<int> sort(vector<int> list){
    for (unsigned int k = 0; k < list.size(); k++){
        for (unsigned int j = 0; j < list.size(); j++){
            if (list.at(k) > list.at(j)){
                int small = list.at(j);
                int large = list.at(k);
                list.at(j) = large;
                list.at(k) = small;
            }
        }
    }
    return list;
}