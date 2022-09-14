#include <iostream>
using namespace std;
double exponential(double x, double n){
    if (n == 0)
        return 1;
    return x*exponential(x,n-1);
}   
int main(void){
    cout <<"\n\n The exponential is: "<<exponential(11,11)<<"\n\n";
    return 0;
}