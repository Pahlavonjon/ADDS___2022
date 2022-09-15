#include <iostream>
using namespace std; // A tail recursive function to
int fibonacci(int n, int a = 0, int b = 1){
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fibonacci(n - 1, b, a + b);
}
int main(void){
    int n = 9;
    cout << "fibonacci(" << n << ") = "<< fibonacci(n) << "\n\n";
    return 0;
}