#include <iostream>
#include <vector>
#include <limits>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main(void){
    // int array_integers[10] = {1,2,3,4,5,6,7,8,9,10};
    // LinkedList the_second_list(array_integers,10);
    vector<int> the_list;
    string commands = "";
    int num = 0;
    while (true){
        cin >> num;
        the_list.push_back(num);
        if (cin.peek() == '\n'){
            break;
        }
    }
    int the_list_copy_array[the_list.size()];
    for (unsigned int k = 0; k < the_list.size(); k++){
        the_list_copy_array[k] = the_list.at(k);
    }
    LinkedList the_third_list(the_list_copy_array,the_list.size());
    cout << "\n\n The items are: \n\n\n";
    the_third_list.addAtPosition(3,9);
  //  the_third_list.deletePosition(2);
    the_third_list.printItems();
    cout << "\n\n\n";
    return 0;
}