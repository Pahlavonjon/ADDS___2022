#include <iostream>
#include <vector>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
using namespace std;
void Test__Function__One__(vector<int> Vector_Original, vector<int> Vector_Modified, int Current_element, int Vector_Size){
    cout << "\n\n";
    for (Current_element = 0; Current_element < Vector_Size; Current_element++){
        cout << " Modification of " << Vector_Original.at(Current_element) << " is  " << Vector_Modified.at(Current_element)<<"\n";
    }
}
void test_1(){
    //     MapTriple Triple_Number;
//     MapSquare Square_Number;
//     MapAbsoluteValue Absolute_Number;
//     vector<int> Vector_Map_Numbers = {70,71,72,73,74,75,76,77,78,79};
//     vector<int> Vector_Map_Numbers_Negative = {-70,-71,-72,-73,-74,-75,-76,-77,-78,-79};
//     vector<int> Vector_Map_Numbers_Tripled = Triple_Number.map(Vector_Map_Numbers);
//     vector<int> Vector_Map_Numbers_Squared = Square_Number.map(Vector_Map_Numbers);
//     vector<int> Vector_Map_Numbers_Absoluted = Absolute_Number.map(Vector_Map_Numbers_Negative);
//    // int Vector_Size = Vector_Map_Numbers.size();
       int Current_element = 0; uvy

//     // cout << "\n";
//     // Test__Function__One__(Vector_Map_Numbers,Vector_Map_Numbers_Tripled,Current_element,Vector_Size);
//     // Test__Function__One__(Vector_Map_Numbers,Vector_Map_Numbers_Squared,Current_element,Vector_Size);
//     // Test__Function__One__(Vector_Map_Numbers_Negative,Vector_Map_Numbers_Absoluted,Current_element,Vector_Size);
//     // cout << "\n\n";

    FilterOdd Odds_Only;
    FilterNonPositive Negatives_Only;
    FilterForTwoDigitPositive Positives;
    vector<int> Vector_Filter_Numbers = {34,-23,4,6,9,45,-45,-3,0,-96};
 //   int Filter_Vector_Size = Vector_Filter_Numbers.size();
    vector<int> Vector_Filter_Numbers_odds = Odds_Only.filter(Vector_Filter_Numbers);
    vector<int> Vector_Filter_Numbers_negatives = Negatives_Only.filter(Vector_Filter_Numbers);
    vector<int> Vector_Filter_Numbers_Positives = Positives.filter(Vector_Filter_Numbers);

    cout << "\n";
    Test__Function__One__(Vector_Filter_Numbers,Vector_Filter_Numbers_odds,Current_element,Vector_Filter_Numbers_odds.size());
    Test__Function__One__(Vector_Filter_Numbers,Vector_Filter_Numbers_negatives,Current_element,Vector_Filter_Numbers_negatives.size());
    Test__Function__One__(Vector_Filter_Numbers,Vector_Filter_Numbers_Positives,Current_element,Vector_Filter_Numbers_Positives.size());
    cout << "\n\n";
} 
int main(void){
    vector <int> Test_2 = {6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189};
    cout << "\n\n";
    ReduceMinimum Find_minimum;
    MapTriple Convert_to_triple;
    FilterForTwoDigitPositive Convert_to_two_digit_positive;
   // Convert_to_two_digit_positive.filter(Convert_to_triple.map(Test_2));
    
    cout << " The minimum is: "<<Find_minimum.reduce(Convert_to_two_digit_positive.filter(Convert_to_two_digit_positive.filter(Convert_to_triple.map(Convert_to_triple.map(Test_2)))))<<"\n";
    cout << "\n\n";

    return 0;
}





 // over riding is the exact same function signature but different implementation
 // overloading is when the function type or the parameters type and order are different but same function same