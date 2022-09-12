#ifndef Mutator_H
#define Mutator_H
#include "Individual.h"
class Mutator {
    public:
        virtual Individual* mutate(Individual* This_person,int k) = 0;
};
#endif