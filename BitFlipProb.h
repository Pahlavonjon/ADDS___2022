#ifndef BitFlipProb_H
#define BitFlipProb_H
#include "Mutator.h"
class BitFlipProb : public Mutator {
    private:
        double probability;
    public:
        BitFlipProb();
        BitFlipProb(double the_probability);
        Individual* mutate(Individual* This_person,int k);
        double get_Probability();
};
#endif