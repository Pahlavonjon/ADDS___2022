#include <iostream>
#include <vector>
#include <sstream>
#include <limits>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main(void){
    vector<string> String_Vector = {};
    string input;
    getline(cin, input);
    stringstream stringggg_form;
    stringggg_form << input;
    string String_Temporary;
    while(!stringggg_form.eof()) {
        stringggg_form >> String_Temporary;
        String_Vector.push_back(String_Temporary);
    }
    int arr[100] = {};
    int a = (String_Vector.size()-3);
    for (int i = 0; i < a; i++) {
        arr[i] = stoi(String_Vector[i]);
    }
    string str = String_Vector[String_Vector.size()-3];
    int first_number = stoi(String_Vector[String_Vector.size()-2]);
    int second_number = stoi(String_Vector[String_Vector.size()-1]);
    LinkedList * LINKED_LIST = new LinkedList(arr, (String_Vector.size()-3));
    if (str == "AF") {
        LINKED_LIST->addFront(first_number);
    } 
    else if (str == "AE") {
        LINKED_LIST->addEnd(first_number);
    } 
    else if (str == "AP") {
        LINKED_LIST->addAtPosition(first_number, second_number);
    } else if (str == "S") {
        LINKED_LIST->search(first_number);
    } else if (str == "DF") {
        LINKED_LIST->deleteFront();
    } else if (str == "DE") {
        LINKED_LIST->deleteEnd();
    } else if (str == "DP") {
        LINKED_LIST->deletePosition(first_number);
    } else if (str == "GI") {
        LINKED_LIST->getItem(first_number);
    } 
    LINKED_LIST->printItems();
    cout << "\n";
    return 0;
}