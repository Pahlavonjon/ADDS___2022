#include <iostream>
#include <string>
#include <vector>
using namespace std;

void calculate(string user_input, string the_operations, int operations_length, vector<int> the_number_vector, int *the_result){
    int o_index = 0;
    bool end_of_operations = false;
    int pos_length = the_number_vector.size();
    for (int k = 1; k < pos_length; k++){
     //   cout << " new iteration\n";
        if (the_operations[o_index] == '+'){
            if (k == 1) {
                *the_result = ((the_number_vector[k-1]) + (the_number_vector[k]));
          //      cout << "\n the result is  +  " << *the_result<<"\n";
            }
            else if (k >= 2){ 
                *the_result += (the_number_vector.at(k));
         //       cout << "\n here  added "<<*the_result<< "\n";
            }
            else if (k == pos_length-1 && end_of_operations == false){
                *the_result += (the_number_vector[k]);
         //       cout << "\n here\n";
            }
        }
        if (the_operations[o_index] == '-'){
            if (k == 1) {
                *the_result = (((the_number_vector[k-1])) - (the_number_vector[k]));
        //        cout << "\n the result is  -  " << *the_result<<"\n";
            }
            else if (k >= 2){ 
                *the_result -= ((the_number_vector[k]));
           //     cout << "\n here  minused "<<*the_result<<"\n";
            }
            else if (k == pos_length-1 && end_of_operations == false){
                *the_result -= ((the_number_vector[k]));
            //    cout << "\n the result is - " << *the_result<<"\n";
            }
        }
        if (the_operations[o_index] == '*'){
            if (k == 1) {
                *the_result = (((the_number_vector[k-1])) * (the_number_vector[k]));
           //     cout << "\n the result is  *  " << *the_result<<"\n";
            }
            else if (k >= 2){ 
                *the_result *= ((the_number_vector[k]));
           //     cout << "\n here  multiplied "<<*the_result<<"\n";
            }
            else if (k == pos_length-1 && end_of_operations == false){
                *the_result *= ((the_number_vector[k]));
          //      cout << "\n the result is * " << *the_result<<"\n";
            }
        }
        if (the_operations[o_index] == '/'){
            if (k == 1) {
                *the_result = (((the_number_vector[k-1])) / (the_number_vector[k]));
           //     cout << "\n the result is  /  " << *the_result<<"\n";
            }
            else if (k >= 2){ 
                *the_result /= ((the_number_vector[k]));
         //       cout << "\n here  divided "<<*the_result<<"\n";
            }
            else if (k == pos_length-1 && end_of_operations == false){
                *the_result /= ((the_number_vector[k]));
       //         cout << "\n the result is / " << *the_result<<"\n";
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
    int number_brackets = 0;
    bool valid_input = true;
   // int operations_length_copy = 0;
    string user_input_copy = "";
    for (unsigned int k = 0; k < user_input.length(); k++){
        if (user_input[k] == '+' || user_input[k] == '-' || user_input[k] == '*' || user_input[k] == '/'){
            the_operations[k] = user_input[k];
            operations_length++;
        }
        if (user_input[k] == '(' || user_input[k] == ')'){
            user_input[k] = 0;
            number_brackets++;
        }
    }
    if (number_brackets%2 != 0){
        cout << "Error\n";
        return 0;
    }
    for (int k = 1; k < operations_length; k++){
        if ((user_input[k] == '+' || user_input[k] == '-' || user_input[k] == '*' || user_input[k] == '/') && (user_input[k-1] == '+' || user_input[k-1] == '-' || user_input[k-1] == '*' || user_input[k-1] == '/')){
            valid_input = true;
        }
        else {
            valid_input = false;
            if (valid_input == false){
                cout << "Error\n";
                return 0;
            }
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
    vector<int> the_number_vector;
    for (unsigned int k = 0; k < user_input.length(); k++){
        if (user_input.at(k) >= 48 && user_input.at(k) <= 57){
            the_numbers[k] = user_input[k];
            the_number_vector.push_back(((int)the_numbers[k])-48);
        }
    }
    int the_number_vector_length = the_number_vector.size();
    if (the_number_vector_length != operations_length+1){
        cout << "Error\n";
        return 0;
    }
    calculate(user_input,the_operations_copy, operations_length,the_number_vector,&result);
    for (unsigned int k = 1; k < the_number_vector.size(); k++){
        if (the_number_vector.size() == 2){
            if (k == 1)
                cout <<the_number_vector.at(k-1)<< the_operations_copy.at(k-1) << the_number_vector.at(k);
        }
        else if (the_number_vector.size() == 3){
            if (k == 1)
                cout << "("<<the_number_vector.at(k-1)<< the_operations_copy.at(k-1) << the_number_vector.at(k) << ")";
            else {
                cout << the_operations_copy.at(k-1) << the_number_vector.at(k);
            } 
        }
        else if (the_number_vector.size() == 4){
            if (k == 1)
                cout <<"(" <<"("<<the_number_vector.at(k-1)<< the_operations_copy.at(k-1) << the_number_vector.at(k) << ")";
            else if (k == the_number_vector.size()-1){
                cout << the_operations_copy.at(k-1) << the_number_vector.at(k);
            }
            else {
                cout << the_operations_copy.at(k-1) << the_number_vector.at(k) << ")";
            } 
        }
        else if (the_number_vector.size() == 5){
            if (k == 1)
                cout <<"("<<"(" <<"("<<the_number_vector.at(k-1)<< the_operations_copy.at(k-1) << the_number_vector.at(k) << ")";
            else if (k == the_number_vector.size()-1){
                cout << the_operations_copy.at(k-1) << the_number_vector.at(k);
            }
            else {
                cout << the_operations_copy.at(k-1) << the_number_vector.at(k) << ")";
            } 
        }
        else if (the_number_vector.size() > 5){
            if (k == 1){
                for (unsigned int j = 0; j < the_number_vector.size()-3; j++){
                    cout << "(";
                }
                cout << "("<<the_number_vector.at(k-1)<< the_operations_copy.at(k-1) << the_number_vector.at(k) << ")";
            }
            else if (k == the_number_vector.size()-1){
                cout << the_operations_copy.at(k-1) << the_number_vector.at(k);
            }
            else {
                cout << the_operations_copy.at(k-1) << the_number_vector.at(k) << ")";
            } 
        }
    }
    cout << "=" << result <<"\n";
    return 0;
}