#include "ReduceGCD.h"
#include <vector>
#include <bits/stdc++.h>
using namespace std;
ReduceGCD::ReduceGCD() {this->index = 0;}
int ReduceGCD::binaryOperator(int x, int y) {
    //  if () // use gcd built in function stl 
    return 0;
}
int ReduceGCD::reduce(vector<int> The_Vector){
  int length = The_Vector.size();
    if (index == length - 1) {
        return The_Vector.at(index);
    }
    int first = The_Vector.at(index);
    this->index++;
    int second = reduce(The_Vector); // recursion here
    return __gcd(first,second); 
}