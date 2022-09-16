#include "BitFlipProb.h"
#include <random>
#include <cmath>
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
    while (k > This_person->getLength()){
        k -= This_person->getLength();
    }
    for (int k = 0; k < This_person->getLength(); k++){
        if (rand() > probability)
            This_person->flipBit(k);
    }
    return This_person;
}
double BitFlipProb::get_Probability(){
    return probability;
}