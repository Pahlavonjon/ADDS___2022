#include "MapTriple.h"
#include <vector>
using namespace std;
MapTriple::MapTriple(){this->Current_element = 0;}
vector<int> MapTriple::map(vector<int> The_Vector){
    Vector_Size = The_Vector.size();
    if (Current_element >= Vector_Size){
        return The_Vector;
    }
    The_Vector.at(Current_element) = f(The_Vector.at(Current_element)); 
    this->Current_element++;
    return map(The_Vector);
}
int MapTriple::f(int x){
    return 3*x;
}