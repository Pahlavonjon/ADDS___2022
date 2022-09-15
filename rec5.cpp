#include <iostream> // sum digits recursion
using namespace std;
unsigned long long int sumDigits(unsigned long long int n){
    unsigned long long int sum = n%10;
    if (n < 10)
        return n;
    return sum+sumDigits(n/10);
}
int main(void){
    unsigned long long int number = 0;
    cout << "\n\n Enter number ";
    cin >> number;
    cout << "\n\n The sum of the numbers is  "<<sumDigits(number)<<"\n\n";
    return 0;
}