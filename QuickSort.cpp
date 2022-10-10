#include "QuickSort.h"
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
QuickSort::QuickSort(){this->low = 0; this->high = 0; this->start = 0;}

    std::vector<int> QuickSort::sort(std::vector<int> list){
        int pivot_value = 0;
        int pivot_index = 2;
        if (list.size() == 0)
            return list;
        if (list.size() == 1){
            sorted_vector.push_back(list.at(0));
            return sorted_vector;
        }
        if (list.size() == 2){
            pivot_value = list.at(0);
            if (list.at(0) > list.at(1)){
                swap(list.at(0),list.at(1));
            }
            sorted_vector.push_back(list.at(0));
            sorted_vector.push_back(list.at(1));
            return sorted_vector;
        }
     //   cout << "\n out of if statements\n";
        std::vector<int> smaller_than_pivot;
        std::vector<int> bigger_than_pivot;
        pivot_value = list.at(pivot_index);
        list.erase(list.begin()+pivot_index);
        for (unsigned int k = 0; k < list.size(); k++){
            if (list.at(k) > pivot_value)
                bigger_than_pivot.push_back(list.at(k));
            else if (list.at(k) <= pivot_value)
                smaller_than_pivot.push_back(list.at(k)); 
        }
        if (smaller_than_pivot.size() != 0)
            sort(smaller_than_pivot); // recursion
        sorted_vector.push_back(pivot_value);
        if (bigger_than_pivot.size() != 0)
            sort(bigger_than_pivot); // recursion
        return sorted_vector;
    }