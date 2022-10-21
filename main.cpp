#include <iostream>
#include <string>
#include <vector>
using namespace std;
// void calculate(vector<string> The_stream, vector<string> the_operations, vector<string> the_numbers , int *result){
//     unsigned int the_size_numbers = the_numbers.size();
//     for (unsigned int k = 0; k < the_size_numbers; k++){
//         if (the_operations[0] == "+"){
//             if (the_size_numbers == 1)
//                 result += (the_numbers[0] - '0');
//             else {
//                 result = the_numbers.at(0) + the_numbers.at(1);
//                 the_numbers.erase(the_numbers.begin()+0);
//                 the_numbers.erase(the_numbers.begin()+1);
//                 the_size_numbers = the_numbers.size();
//             }
//         }
//         else if (the_operations[0] == "+"){
//             if (the_size_numbers == 1)
//                 result -= the_numbers.at(0);
//             else {
//                 result += the_numbers.at(0) - the_numbers.at(1);
//                 the_numbers.erase(the_numbers.begin()+0);
//                 the_numbers.erase(the_numbers.begin()+1);
//                 the_size_numbers = the_numbers.size();
//             }
//         }
//     }
// }

void calculate(string user_input, string the_operations, int operations_length, vector<int> the_number_vector, int *the_result){

    for (unsigned int k = 0; k < the_number_vector.size(); k = k+1){
        if (the_operations[0] == '+' && (the_number_vector[k] != 0)){
            if (k == 0) {
                *the_result = (((the_number_vector[k])) + (the_number_vector[k+1]));
            }
            else if (k != 0 && k != 1){ 
                *the_result += ((the_number_vector[k]));
            }
            else if (k == the_number_vector.size()-1)
                *the_result += ((the_number_vector[k+1]));
        }
        else if (the_operations[0] == '-' && (the_number_vector[k] != 0)){
            if (k == 0) {
                *the_result = (((the_number_vector[k])) - (the_number_vector[k+1]));
            }
            else if (k != 0 && k != 1){ 
                *the_result -= ((the_number_vector[k]));
            }
            else if (k == the_number_vector.size()-1)
                *the_result -= ((the_number_vector[k+1]));
        }
    }
}

int main(void){
    std::string user_input = "";
    getline(cin,user_input);
    string the_operations = "                                                                                                                                                                                        ";
    string the_operations_copy = "                                                                                                                                                                                        ";
    string the_numbers = "                                                                                                                                                                                        ";
    int operations_length = 0;
    int result = 0;
    string user_input_copy = "";
    for (unsigned int k = 0; k < user_input.length(); k++){
        if (user_input[k] == '+' || user_input[k] == '-' || user_input[k] == '*' || user_input[k] == '/'){
            the_operations[k] = user_input[k];
            operations_length++;
        }
        if (user_input[k] == '(' || user_input[k] == ')'){
            user_input[k] = 0;
        }
    }
    for (unsigned int k = operations_length-1; k < the_operations.length(); k++){
        if (the_operations[k] == ' ')
            the_operations[k] = 0;
    }
    cout << " here \n";
    for (unsigned int k = the_operations.length()-1; k > 1; k--){
        if (the_operations[k] != 0)
            the_operations_copy[k] = the_operations[k];
    }
    cout << "\n\n the operations in reverse: \n";
    for (unsigned int k = 0; k < the_operations_copy.size(); k--){
        if (the_operations_copy[k] != 0)
            cout << " " << the_operations_copy[k]<<"\n";
    }
 //   int the_numbers_length = 0;
    vector<int> the_number_vector;
    for (unsigned int k = 0; k < user_input.length(); k++){
        if (user_input.at(k) >= 48 && user_input.at(k) <= 57){
            the_numbers[k] = user_input[k];
            the_number_vector.push_back((int)the_numbers[k]-48);
        }
    }
    // for (unsigned int k = the_numbers_length-1; k < the_numbers.length(); k++){
    //     if (the_numbers[k] == ' ')
    //         the_numbers[k] = 0;
    // }
    int the_number_vector_length = the_number_vector.size();
    if (the_number_vector_length != operations_length+1){
        cout << "\n ERROR \n";
        return 0;
    }
    // + = 43, - = 45, / = 47, * = 42;
    calculate(user_input,the_operations, operations_length,the_number_vector,&result);
    cout << "\n\n   The result is:  " << result <<"\n";
    cout << "\n\n";
    return 0;
}