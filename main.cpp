#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;
Individual* execute(Individual* indPtr, Mutator* mPtr, int k){
    mPtr->mutate(indPtr,k);
    return indPtr;
}
int main(void){
    Individual John;
    Individual Jake;
    int k1;
    int k2;
    string binarystr1;
    string binarystr2;
    cin >> binarystr1 >> k1 >> binarystr2 >> k2;
    John.update_list(binarystr1);
    Jake.update_list(binarystr2);
    BitFlip Flip_bits;
    Rearrange Change_order;
    BitFlipProb Probabilityy(0.7);
    execute(&John,&Flip_bits,k1);
    execute(&Jake,&Change_order,k2);
    int max_ones = 0;
    max_ones = Jake.getMaxOnes();
    cout << John.getString() << " " << Jake.getString() << " " << max_ones << "\n";  
    // execute(&John,&Probabilityy,5);
    // cout << John.getString()<< " " << Jake.getString()<< " " << max_ones <<"\n";  
    return 0;
}