#ifndef Individual_H
#define Individual_H
#include <string>
class Individual {
    private:
        std::string binaryString; // stores values of genes
        std::string Adenine;
        std::string Tymine;
        std::string Guanine;
        std::string Cytosine;
    public:
        Individual();
        Individual(int Binary_length); // create a binary string based on length
        Individual(std::string Binary_string);
        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();
        void update_list(std::string new_list);
        // A 00
        // C 01
        // G 10
        // T 11
};
#endif