#include "MapAbsoluteValue.h"
#include <vector>
using namespace std;
MapAbsoluteValue::MapAbsoluteValue(){this->Current_element = 0;}
vector<int> MapAbsoluteValue::map(vector<int> The_Vector){
    Vector_Size = The_Vector.size();
    if (Current_element >= Vector_Size){
        return The_Vector;
    }
    The_Vector.at(Current_element) = f(The_Vector.at(Current_element)); 
    this->Current_element++;
    return map(The_Vector);
}
int MapAbsoluteValue::f(int x){
    if (x < 0)
        return x*-1;
    return x;
}