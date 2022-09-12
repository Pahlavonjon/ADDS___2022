#ifndef BitFlip_H
#define BitFlip_H
#include "Mutator.h"
//#include "Individual.h"
class BitFlip : public Mutator {
    public:
        BitFlip();
        Individual* mutate(Individual* This_person,int k);
};
#endif