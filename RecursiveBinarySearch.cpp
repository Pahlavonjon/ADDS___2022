#include "RecursiveBinarySearch.h"
#include <vector>
RecursiveBinarySearch::RecursiveBinarySearch(){}
bool RecursiveBinarySearch::search(std::vector<int> The_Vector, int get_me_this_number){
    int the_middle = 0;
    int the_middle_index = 0;
    if ((The_Vector.at(0) == get_me_this_number )){
        return true; 
        if (The_Vector.at(0) != get_me_this_number)
            return false;
    }
    if ((The_Vector.size())%2 == 0) 
        the_middle_index = (The_Vector.size())/2 -1 ; 
    else if ((The_Vector.size())%2 != 0) 
        the_middle_index = (The_Vector.size())/2;
    the_middle = The_Vector.at(the_middle_index);
    if (get_me_this_number == The_Vector.at(the_middle_index))
        return true;
    if (get_me_this_number > the_middle)
        The_Vector.erase(The_Vector.begin(),The_Vector.begin()+the_middle_index+1);
    else if (get_me_this_number < the_middle)
        The_Vector.erase(The_Vector.begin()+the_middle_index,The_Vector.end());
    return search(The_Vector,get_me_this_number);
}