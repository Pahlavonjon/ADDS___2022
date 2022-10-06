#include "QuickSort.h"
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
QuickSort::QuickSort(){this->smaller_index = -1;this->recursion_index = 0; this->low = 0;}
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
    if (list.size() == 1)
        return list;
    if (list.size() == 2){
        if (list.at(0) > list.at(1))
            swap(list.at(0),list.at(1));
            return list;
    }
    int pivot_value = list.at(2);
    int larger_pointer = 0;
    int smaller_pointer = 0;
    for (unsigned int k = 0; k < list.size(); k++){
        if (list.at(k) > pivot_value)
            smaller_pointer = k;
        if (list.at(k) < pivot_value)
            larger_pointer = k;
        if ((list.at(smaller_pointer) > list.at(larger_pointer)))
            swap(list.at(smaller_pointer),list.at(larger_pointer));
    }
}

int helper(vector<int> array) {
    // select the rightmost element as pivot
    if (array.size() == 1)
        return array;
    int pivot = array[2];
    
    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            
        // if element smaller than pivot is found
        // swap it with the greater element pointed by i
        i++;
        
        // swap element at i with element at j
        swap(array[i], array[j]);
        }
    }
    // swap pivot with the greater element at i
    swap(array[i + 1], array[high]);
    return (i + 1);
    }

    vector<int> QuickSort::sort(vector<int> list) {
        if (low < high) {
            int pi = partition(list, low, high);
            quickSort(list, low, pi - 1);
            quickSort(list, pi + 1, high);
        }
    }









// vector<int> QuickSort::sort(vector<int> list){
//     int pivot = 2;
//     int pivot_value = 0;
//     if (list.size() <= 1){
//         sorted_vector.push_back(list.at(0));
//         return sorted_vector;
//     }
//     // else if (list.size() == 2){
//     //     if (list.at(0) > list.at(1)){
//     //         swap(list.at(0),list.at(1));
//     //     }
//     //     sorted_vector.push_back(0);
//     //     sorted_vector.push_back(1);
//     //     return sorted_vector; 
//     // }
//     if (list.size() == 2)
//         pivot = 1;
//     pivot_value = list.at(pivot);
//     vector<int> smaller_than;
//     vector<int> larger_than;
//     list.erase(list.begin()+pivot);
//     for (unsigned int k = 0; k < list.size(); k++){
//         if (list.at(k) <= pivot_value){
//             smaller_than.push_back(list.at(k));
//         }
//         else {
//             larger_than.push_back(list.at(k));
//         }
//     }

//     sort(smaller_than);
//     sorted_vector.push_back(pivot_value);
//     sort(larger_than);
//     return sorted_vector;
        

//     // if (smaller_than.size() != 0){
//     // for (unsigned int k = 0; k < smaller_than.size()-1; k++){
//     //     if (smaller_than.at(k) > smaller_than.at(k+1)){
//     //         swap(smaller_than.at(k),smaller_than.at(k+1));
//     //     }
//     // } 
    
//     // // for (unsigned int k = 0; k < smaller_than.size(); k++){
//     // //     sorted_vector.push_back(smaller_than.at(k));
//     // // }
//     // }
//     // if (larger_than.size() != 0){
//     // for (unsigned int k = 0; k < larger_than.size()-1; k++){
//     //     if (larger_than.at(k) > larger_than.at(k+1))
//     //         swap(larger_than.at(k),larger_than.at(k+1));
//     // } 
    
//     // // for (unsigned int k = 0; k < larger_than.size(); k++){
//     // //     sorted_vector.push_back(larger_than.at(k));
//     // // }
//     // cout << "\n\n HERE!!!  \n\n";
//     // }

// }
