#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main(void){
  //  vector<int> List_1 = {1,5,7,4,3,7,8,5,4,3,9,324,6576,34};
    vector<int> List_1 = {1,5,4,3,9,324,6576,34};
    BubbleSort BubbleSorter;
    QuickSort QuickSorter;
    List_1 = BubbleSorter.sort(List_1);
   // List_1.erase(List_1.begin(),List_1.begin()+1);
   // List_1 = QuickSorter.sort(List_1);
    cout << "\n\n";
    for (unsigned int k = 0; k < List_1.size(); k++){
        cout << " " << List_1.at(k);
    }
    cout << "\n\n";
    RecursiveBinarySearch Sucher;
    cout << "  " << Sucher.search(List_1,1)<< "\n\n";
    cout << "  " << Sucher.search(List_1,3)<< "\n\n";
    cout << "  " << Sucher.search(List_1,4)<< "\n\n";
    cout << "  " << Sucher.search(List_1,5)<< "\n\n";
    cout << "  " << Sucher.search(List_1,9)<< "\n\n";
    cout << "  " << Sucher.search(List_1,34)<< "\n\n";
    cout << "  " << Sucher.search(List_1,324)<< "\n\n";
    cout << "  " << Sucher.search(List_1,6576)<< "\n\n";

    cout << "\n\n";
    return 0;
}