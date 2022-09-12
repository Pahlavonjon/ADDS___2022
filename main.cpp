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
    Individual Me;
    Me.update_list("00001111");
    cout << "\n The list is " << Me.getString()<<"\n\n";
    BitFlip Flip_bits;
    Rearrange Change_order;
    execute(&Me,&Change_order,4);
    cout << " The mutated list is " << Me.getString()<<"\n\n";
    return 0;
}