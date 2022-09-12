#include <iostream>
using namespace std;
int factorial(int value,int n){
    if (n <= 0)
        return value;
    return factorial(value*(n),n-1);
}
int main(void) {
    cout << "\n "<<factorial(1,19)<<"\n";
} // user pointer for polymorphism