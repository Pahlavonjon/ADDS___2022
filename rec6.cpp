#include <iostream> // sum digits TAIL recursion
using namespace std;
unsigned long long int sumDigits(unsigned long long int n, unsigned long long int accumulator){
    if (n < 10)
        return accumulator+n;
    return sumDigits(n/10,(n%10)+accumulator);
}
int main(void){
    unsigned long long int number = 0;
    cout << "\n\n Enter number ";
    cin >> number;
    cout << "\n\n The sum of the numbers is  "<<sumDigits(number,0)<<"\n\n";
    return 0;
}