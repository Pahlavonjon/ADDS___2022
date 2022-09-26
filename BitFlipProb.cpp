#include "BitFlipProb.h"
#include <random>
#include <cmath>
#include <iostream>
using namespace std;
BitFlipProb::BitFlipProb(){}
BitFlipProb::BitFlipProb(double the_probability){
    if (the_probability >= 0 && the_probability <= 1)
        this->probability = the_probability;
}
Individual* BitFlipProb::mutate(Individual* This_person,int k){
    double p_int = probability*6; 
      //      cout << " the probabilty was " << p_int <<"\n";
    double threshold = 6-p_int;
       //     cout << " the threshold was " << threshold <<"\n";
    if (k < 1){
        return This_person;
    }
    while (k > This_person->getLength()){
        k -= This_person->getLength();
    }
    for (int j = 0; j < This_person->getLength(); j++){
        int num = (rand()%6+1);
        //    cout << " the random was " << num <<"\n";
        if ( num > (threshold )){
            This_person->flipBit(j+1);
        }
    }
    return This_person;
}
double BitFlipProb::get_Probability(){
    return probability;
}