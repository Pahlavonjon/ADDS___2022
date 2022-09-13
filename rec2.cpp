#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// given N and k, find x between 1 and N such that sum of x^k = N...   Hacker rank Power sum
int powerSum(int X, int N, int K) {
    int sum = pow(K,N);
    int combinations = 0;
    if (K => X)
        return combinations;
    if (sum == X){
        combinations++;
        sum = 0;
    }
    return sum + powerSum(X,N,K+1);
}

int main(void){
    powerSum(100,2,1);
    return 0;
}