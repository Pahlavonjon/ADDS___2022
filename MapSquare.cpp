#include "MapSquare.h"
#include <vector>
using namespace std;
MapSquare::MapSquare(){this->Current_element = 0;}
vector<int> MapSquare::map(vector<int> The_Vector){
    Vector_Size = The_Vector.size();
    if (Current_element >= Vector_Size){
        return The_Vector;
    }
    The_Vector.at(Current_element) = f(The_Vector.at(Current_element)); 
    this->Current_element++;
    return map(The_Vector);
}
int MapSquare::f(int x){
    return x*x;
}