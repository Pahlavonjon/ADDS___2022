#include <iostream>
#include <string>
using namespace std;
long long int superDigit(string n, int k){
    for (int j = 0; j < k; j++){
        n += n;
    }
    int super_digit = 0;
    long long int converted_long_digit = stol(n);
    for (int j = 0; j < (n.length())*k; j++){
        super_digit += converted_long_digit%10;
        converted_long_digit = converted_long_digit/10;
    }
    return super_digit;

}
int main(void){
    cout << "\n\n The super digit is: "<< superDigit("9875",4)<<"\n\n";
    return 0;
}