#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

void tester(){
//  vector<int> List_1 = {1,5,7,4,3,7,8,5,4,3,9,324,6576,34};
    vector<int> List_1 = {1,5,4,3,9,324,6576,34};
   // vector<int> List_1 = {4,3,2,1};
    BubbleSort BubbleSorter;
    QuickSort QuickSorter;
  //  List_1 = BubbleSorter.sort(List_1);
   // List_1.erase(List_1.begin(),List_1.begin()+1);
    List_1 = QuickSorter.sort(List_1);
    cout << "\n\n  MAIN   \n\n";
    for (unsigned int k = 0; k < List_1.size(); k++){
        cout << " " << List_1.at(k);
    }
    cout << "\n\n";
    RecursiveBinarySearch Sucher;
   
    cout << "\n\n";

}

int main(void){
    BubbleSort BubbleSorter;
    QuickSort QuickSorter;
    RecursiveBinarySearch Sucher;
    int length = 8;
    int array[length];
    vector<int> the_list;
    cin >> array[0] >> array[1] >> array[2] >> array[3] >>  array[4] >> array[5] >> array[6] >> array[7];
    for (int k = 0; k < 8; k++){
      the_list.push_back(array[k]);
    }
    the_list = QuickSorter.sort(the_list);
    bool result = Sucher.search(the_list,1);
    string Result = "";
    if (result == false)
        Result = "false";
    else if (result == true)
        Result = "true";
    cout << Result << " " << the_list.at(0) << " " << the_list.at(1) << " " << the_list.at(2) << " " << the_list.at(3) << " " << the_list.at(4) << " " << the_list.at(5) << " " << the_list.at(6) << " " << the_list.at(7)<<"\n"; 
    return 0;
}