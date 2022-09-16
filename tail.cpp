#include <iostream> // finds how many duplicates there are in the array
using namespace std;
int helper(int* k){
    return *(k)+1;
}
int numDup(int arr[], int start, int size, int element) {
    int dup = 0;
    if (start >= size){
        return helper(dup);
    }
    if (arr[start] == element){ 
        helper(dup);
    }
    return numDup(arr,start+1,size,element);
}
int main(void){
    int array[] = {1,2,4,4,5,6,7,4,4,10};
    cout << "\n\n "<<numDup(array,0,10,4)<<"\n\n";
    return 0;
}