#include "FilterNonPositive.h"
#include <vector>
using namespace std;
FilterNonPositive::FilterNonPositive(){this->Current_element = 0;}
vector<int> FilterNonPositive::filter(vector<int> The_Vector){
    int vector_size = The_Vector.size();
    if (Current_element >= vector_size){
        return The_Vector;
    }
    if (g((The_Vector.at(Current_element))) == false){
        The_Vector.erase(The_Vector.begin()+Current_element);
    }
    else {
        this->Current_element++;
    }
    return filter(The_Vector);
}
bool FilterNonPositive::g(int x){
    if (x < 0){
        return true;
    }
    return false;
}