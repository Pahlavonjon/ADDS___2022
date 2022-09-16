#include "FilterOdd.h" 
#include <vector> 
using namespace std;
    FilterOdd::FilterOdd(){this->Current_element = 0;}
    vector<int> FilterOdd::filter(vector<int> The_Vector){
        int vector_size = The_Vector.size();
        if (Current_element >= vector_size){ // there is only 1 filter function in the generi function
            return The_Vector; // NOT RECURSION!!!!
        } 
        if (g(The_Vector.at(Current_element)) == false){
            The_Vector.erase(The_Vector.begin()+Current_element);
        }
        else {
            this->Current_element++;
        }
        return filter(The_Vector); 
    } 
    bool FilterOdd::g(int x){
        if (x%2 != 0){ 
            return true;                 
        } 
        return false;
    }                     