#include "FilterForTwoDigitPositive.h"
#include <vector>
using namespace std;
FilterForTwoDigitPositive::FilterForTwoDigitPositive(){this->Current_element = 0;}
vector<int> FilterForTwoDigitPositive::filter(vector<int> The_Vector){
    int vector_size = The_Vector.size();
    if (this->Current_element >= vector_size){
        return The_Vector;
    }
    if (g(The_Vector.at(Current_element)) == false){
        The_Vector.erase(The_Vector.begin()+Current_element); // this element is being removed! dont forget about the index change!
    }
    else {
        this->Current_element++;
    }
    return filter(The_Vector);
}
bool FilterForTwoDigitPositive::g(int x){
    if (x > 0 && x >= 10){
        return true;
    }
    return false;
}