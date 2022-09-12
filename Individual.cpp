#include "Individual.h"
#include <string>
using namespace std;
Individual::Individual(){
    this->Adenine = "00";
    this->Tymine = "11";
    this->Guanine = "10";
    this->Cytosine = "01";
    this->binaryString = Adenine + Cytosine + Guanine + Tymine;
    } // A C G T
Individual::Individual(int Binary_length){
    for (int k = 0; k < Binary_length; k++){
        binaryString[k] = '0';
    }
}
Individual::Individual(string Binary_string){
    this->binaryString = Binary_string;
}
string Individual::getString(){
    return binaryString;
} //: The function outputs a binary string representation of the bitstring list (e.g.“01010100”).
int Individual::getBit(int pos){
    if (pos > 7 || pos < 0){
        return -1;
    }
    return (this->binaryString[pos]);
} //: The function returns the bit value at position pos. It should return -1 if pos is out of bound..
void Individual::flipBit(int pos){
    if (pos <= 7 || pos >= 0){
        if (binaryString[pos] == '0') 
            binaryString[pos] = '1';
        binaryString[pos] = '0';
    }
} //: The function takes in the position of the certain bit and flip the bit value.
int Individual::getMaxOnes(){
    int length_streak = 0;
    bool on_a_steak = false;
    for (int k = 0; k < 8; k++){
        if (binaryString[k] == '1' && binaryString[k+1] == '1'){ // , 
            if (on_a_steak == false){
                length_streak += 2;
                on_a_steak = true;
            }
            else if (on_a_steak == true){
                length_streak++;
            }
        }
        else {
            on_a_steak = false;
        }
    }
    return length_streak;
} //: The function returns the longest consecutive sequence of ‘1’ digits in the list (e.g. calling the function on “1001110” will obtain 3).
int Individual::getLength(){
    return binaryString.length();
} //: The function returns the length of the list.
void Individual::update_list(string new_list){
    this->binaryString = new_list;
}

//A constructor that takes in the length of the binary DNA and creates the binary string. Each binary value in the list should be given a value of 0 by default.
//A constructor that takes in a binary string and creates a new Individual with an identical list. Note that this involves creating a new copy of the list.