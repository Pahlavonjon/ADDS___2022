#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
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
    execute(&John,&Flip_bits,k1);
    execute(&Jake,&Change_order,k2);
    int max_ones = 0;
    if (John.getMaxOnes() > Jake.getMaxOnes()){
        max_ones = John.getMaxOnes();
    }
    else {
        max_ones = Jake.getMaxOnes();
    }
    cout << John.getString()<< " " << Jake.getString()<< " " << max_ones <<"\n";    
    return 0;
}