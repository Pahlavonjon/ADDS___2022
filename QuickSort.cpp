#include "QuickSort.h"
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
QuickSort::QuickSort(){this->smaller_index = -1;this->recursion_index = 0; this->low = 0; this->high = 0; this->start = 0;}

// vector<int> QuickSort::sort(vector<int> list){
//     if (list.size() == 1)
//         return list;
//     if (list.size() == 2){
//         if (list.at(0) > list.at(1))
//             swap(list.at(0),list.at(1));
//             return list;
//     }
//     int pivot_value = list.at(2);
//     int larger_pointer = 0;
//     int smaller_pointer = 0;
//     for (unsigned int k = 0; k < list.size(); k++){
//         if (list.at(k) > pivot_value)
//             smaller_pointer = k;
//         if (list.at(k) < pivot_value)
//             larger_pointer = k;
//         if ((list.at(smaller_pointer) > list.at(larger_pointer)))
//             swap(list.at(smaller_pointer),list.at(larger_pointer));
//     }
// }
int QuickSort::helper(std::vector<int> list, int low, int high, int pivot){
	int i = low;
	int j = low;
	while( i <= high){
		if(list.at(i) > pivot){
			i++;
		}
		else{
			swap(list,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

std::vector<int> QuickSort::sort(std::vector<int> list){
    if (start = 0){
        this->low = 0;
        this->high = list.size()-1;
        this->start = 1;
    }
	if (low < high){
        int pivot = list.at(high);
        int pos = helper(list, low, high, pivot);
        low_b = low;
        high_b = high;
        this->high = pos-1;
            sort(list, low, pos-1); // list, low, pos-1)
        this-> low = pos+1;
        this-> high = high_b;
            sort(list, pos+1, high); // list, pos+1, high
	}
    return list;
}