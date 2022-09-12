#include "BitFlipProb.h"
using namespace std;
BitFlipProb::BitFlipProb(){}
BitFlipProb::BitFlipProb(double the_probability){
    if (the_probability >= 0 && the_probability <= 1)
        this->probability = the_probability;
}
Individual* BitFlipProb::mutate(Individual* This_person,int k){
    if (k < 1){
        return This_person;
    }
    for (int j = 0; j < This_person->getLength(); j++){

    }
    return This_person;
}