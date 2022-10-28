// #include <iostream> 
// using namespace std; 
 
// // forward declaration 
// class B; 
// class A { 
//     private: 
//       int numA; 
//     public: 
//       A(): numA(12) { } 
//       // friend function declaration 
//       friend int add(A, B); 
// }; 
 
// class B { 
//     private: 
//        int numB; 
//     public: 
//        B(): numB(1) { } 
//        // friend function declaration 
//        friend int add(A , B); 
// }; 
 
// // Function add() is the friend function of classes A and B 
// // that accesses the member variables numA and numB 
// int add(A objectA, B objectB) 
// { 
//    return (objectA.numA + objectB.numB); 
// } 
 
// int main() 
// { 
//     A objectA; 
//     B objectB; 
//     cout<<"Sum: "<< add(objectA, objectB); 
//     return 0; 
// } 





#include <iostream> 
using namespace std; 
 
class Distance 
{ 
    private: 
        int meter; 
    public: 
        Distance(): meter(0) { } 
        //friend function 
        friend int addFive(Distance); 
        int return_number();
}; 
 
// friend function definition 
int addFive(Distance d) 
{ 
    //accessing private data from non-member function 
    d.meter += 5; 
    return d.meter; 
} 
int Distance::return_number(){
    return meter;
}

 
int main() 
{ 
    Distance D; 
    cout<<"Distance: "<< addFive(D); 
    cout << "\n The number is actually " << D.return_number()<<"\n\n";

    return 0; 
} 