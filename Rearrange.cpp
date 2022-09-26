#include "Rearrange.h"
#include <iostream>
#include <string>
using namespace std;
Rearrange::Rearrange(){}
Individual* Rearrange::mutate(Individual* This_person,int k){
    if (k <= 0)
        return This_person;
    if (k < 1){
        k *= -1;
    }
    while (k > This_person->getLength()){
        k -= This_person->getLength();
    }
    string* the_whole_list = new string;
    *the_whole_list = This_person->getString();

    string first_half = (*(the_whole_list)).substr(0,k-1);
    string second_half = (*(the_whole_list)).substr(k-1,This_person->getLength());
    
    *the_whole_list = (second_half + first_half);
   // cout << " whole list is " << *the_whole_list<<"\n";
    This_person->update_list(*the_whole_list);
    return This_person;
}