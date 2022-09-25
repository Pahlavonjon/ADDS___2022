#include "BitFlip.h"
using namespace std;
BitFlip::BitFlip(){}
Individual* BitFlip::mutate(Individual* This_person,int k){
    if (k < 1){
        k *= -1;
    }
    while (k > This_person->getLength()){
        k -= This_person->getLength();
    }
    This_person->flipBit(k);
    return This_person;
}