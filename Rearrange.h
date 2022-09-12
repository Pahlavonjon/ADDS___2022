#ifndef Rearrange_H
#define Rearrange_H
#include "Mutator.h"
class Rearrange : public Mutator {
    public:
        Rearrange();
        Individual* mutate(Individual* This_person,int k);
};
#endif