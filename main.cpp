#include <iostream>
#include <string>
#include <vector>
using namespace std;

void calculate(string user_input, string the_operations, int operations_length, vector<int> the_number_vector, int *the_result){
    int o_index = 0;
    for (unsigned int k = 0; k < the_operations.length(); k++){
        cout << " " << the_operations[k];
    }
    bool end_of_operations = false;
    int pos_length = the_number_vector.size();
    for (int k = 1; k < pos_length; k++){
        cout << " new iteration\n";
        if (the_operations[o_index] == '+'){
            if (k == 1) {
                *the_result = ((the_number_vector[k-1]) + (the_number_vector[k]));
                cout << "\n the result is  +  " << *the_result<<"\n";
            }
            else if (k >= 2){ 
                *the_result += (the_number_vector.at(k));
                cout << "\n here  added "<<*the_result<< "\n";
            }
            else if (k == pos_length-1 && end_of_operations == false){
                *the_result += (the_number_vector[k]);
                cout << "\n here\n";
            }
        }
        if (the_operations[o_index] == '-'){
            if (k == 1) {
                *the_result = (((the_number_vector[k-1])) - (the_number_vector[k]));
                cout << "\n the result is  -  " << *the_result<<"\n";
            }
            else if (k >= 2){ 
                *the_result -= ((the_number_vector[k]));
                cout << "\n here  minused "<<*the_result<<"\n";
            }
            else if (k == pos_length-1 && end_of_operations == false){
                *the_result -= ((the_number_vector[k]));
                cout << "\n the result is - " << *the_result<<"\n";
            }
        }
        if (the_operations[o_index] == '*'){
            if (k == 1) {
                *the_result = (((the_number_vector[k-1])) * (the_number_vector[k]));
                cout << "\n the result is  *  " << *the_result<<"\n";
            }
            else if (k >= 2){ 
                *the_result *= ((the_number_vector[k]));
                cout << "\n here  multiplied "<<*the_result<<"\n";
            }
            else if (k == pos_length-1 && end_of_operations == false){
                *the_result *= ((the_number_vector[k]));
                cout << "\n the result is * " << *the_result<<"\n";
            }
        }
        if (the_operations[o_index] == '/'){
            if (k == 1) {
                *the_result = (((the_number_vector[k-1])) / (the_number_vector[k]));
                cout << "\n the result is  /  " << *the_result<<"\n";
            }
            else if (k >= 2){ 
                *the_result /= ((the_number_vector[k]));
                cout << "\n here  divided "<<*the_result<<"\n";
            }
            else if (k == pos_length-1 && end_of_operations == false){
                *the_result /= ((the_number_vector[k]));
                cout << "\n the result is / " << *the_result<<"\n";
            }
        }
        if (o_index < operations_length-1){
            o_index++;
            if (o_index == operations_length){
                end_of_operations = true;
            }
        }
    }
}

int main(void){
    std::string user_input = "";
    getline(cin,user_input);
    string the_operations = "                                                                                                                                                                                         ";
    string the_operations_copy = "                                                                                                                                                                                         ";
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
    int the_operations_length = the_operations.length();
    int the_operations_copy_incrementor = 0;
    for (int k = the_operations_length-1; k > -1; k--){
        if (the_operations[k] != ' ' && the_operations[k] != 0){
            the_operations_copy[the_operations_copy_incrementor] = the_operations[k];
            the_operations_copy_incrementor++;
        }
    }
    // cout << "\n\n the operations in reverse: \n";
    // for (int k = 0; k < the_operations_copy_incrementor; k++){
    //     if (the_operations[k] != ' ' && the_operations[k] != 0)
    //         cout << " " << the_operations_copy[k];
    // }
    vector<int> the_number_vector;
    for (unsigned int k = 0; k < user_input.length(); k++){
        if (user_input.at(k) >= 48 && user_input.at(k) <= 57){
            the_numbers[k] = user_input[k];
            the_number_vector.push_back(((int)the_numbers[k])-48);
        }
    }
    // cout << " the vector numbers \n\n";
    // for (unsigned int k = 0; k < the_number_vector.size(); k++){
    //         cout << "  " << the_number_vector.at(k);
    // }
    int the_number_vector_length = the_number_vector.size();
    if (the_number_vector_length != operations_length+1){
        cout << "Error\n";
        return 0;
    }
    // + = 43, - = 45, / = 47, * = 42;
    calculate(user_input,the_operations_copy, operations_length,the_number_vector,&result);
    cout << "\n\n   The result is:  " << result <<"\n";
 //   cout << " operations length = " << operations_length << "\n\n";
    cout << "\n\n";
    return 0;
}