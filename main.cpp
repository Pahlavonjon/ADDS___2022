#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
using namespace std;

int main(void){
    vector<int> List_1 = {1,5,7,4,3,7,8,5,4,3,9,324,6576,34};
    BubbleSort BubbleSorter;
    QuickSort QuickSorter;
 //   List_1 = BubbleSorter.sort(List_1);
    List_1 = QuickSorter.sort(List_1);
    cout << "\n\n";
    for (unsigned int k = 0; k < List_1.size(); k++){
        cout << " " << List_1.at(k);
    }
    cout << "\n\n";
    return 0;
}