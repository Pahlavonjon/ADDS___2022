#include "QuickSort.h"
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
QuickSort::QuickSort(){this->smaller_index = -1;this->recursion_index = 0;}
// vector<int> QuickSort::sort(vector<int> list){
//     int pivot = 0;
//     if (list.size() <= 1){
//         sorted_vector.push_back(list.at(0));
//         return sorted_vector;
//     }
//     if (list.size() == 2){
//      //   int smaller = 0;
//         if (list.at(0) > list.at(1)){
//             // smaller = list.at(1);
//             // list.at(1) = list.at(0);
//             // list.at(0) = smaller;
//             sorted_vector.push_back(list.at(1));
//             sorted_vector.push_back(list.at(0));
//         }
//         else {
//             sorted_vector.push_back(list.at(0));
//             sorted_vector.push_back(list.at(1));
//         }
//         return sorted_vector;
//     }
//     if (list.size() >= 3){
//         pivot = list.at(2);
//         sorted_vector.push_back(pivot);
//     }
//     vector<int> smaller_half;
//     vector<int> larger_half;
//     for (unsigned int k = 0; k < list.size(); k++){
//         if (list.at(k) < pivot){
//             smaller_half.push_back(list.at(k));
//         }
//         else if (list.at(k) > pivot){
//             larger_half.push_back(list.at(k));
//         }
//     }
//     smaller_half = sort(smaller_half);
//     larger_half = sort(larger_half);
//     list.push_back(pivot);

//     //cout << " " << smaller_half.size() << "\n";
//    // return list.insert(smaller_half.end(),pivot,larger_half.end());
//    return sort(list);
// }

vector<int> QuickSort::sort(vector<int> list){
    int pivot;
    if (list.size() > 2){
        pivot = list.at(2);
    }
    else {
        pivot = list.at(1);
    }
    swap(pivot,list.back()); // pivot is at the end of the vector
    for (unsigned int k = 0; k < list.size(); k++){
        if (list.at(k) <= pivot){
            smaller_index++;
            swap(list.at(smaller_index),list.at(k)));
        }
    }
        
}
