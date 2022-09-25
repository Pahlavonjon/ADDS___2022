#include "QuickSort.h"
#include <iostream>
#include <vector>
using namespace std;
QuickSort::QuickSort(){}
vector<int> QuickSort::sort(vector<int> list){
    int pivot = 0;
    if (list.size() <= 1){
        return list;
    }
    if (list.size() == 2){
        int smaller = 0;
        if (list.at(0) > list.at(1)){
            smaller = list.at(1);
            list.at(1) = list.at(0);
            list.at(0) = smaller;
        }
        return list;
    }
    if (list.size() >= 3){
        pivot = list.at(2);
    }
    vector<int> smaller_half;
    vector<int> larger_half;
    for (unsigned int k = 0; k < list.size(); k++){
        if (list.at(k) < pivot){
            smaller_half.push_back(list.at(k));
        }
        else if (list.at(k) > pivot){
            larger_half.push_back(list.at(k));
        }
    }
    smaller_half = sort(smaller_half);
    larger_half = sort(larger_half);
    list.push_back(pivot);

    //cout << " " << smaller_half.size() << "\n";
   // return list.insert(smaller_half.end(),pivot,larger_half.end());
   return sort(list);
}