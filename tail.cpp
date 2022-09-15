#include <iostream> // finds how many duplicates there are in the array
using namespace std;
int numDup(int arr[], int start, int size, int element) {
    int dup = 0;
    dup += size;
    int len = *(&arr + 1) - arr;
    if (size >= len){
        return 0;
    }
    if (arr[start] == element) {
        dup++;
    }
    return numDup(arr,start+1,dup,element);
}
int main(void){
    int array[] = {1,2,4,4,5,6,7,4,4,10};
    cout << "\n\n "<<numDup(array,0,0,4)<<"\n\n";
    return 0;
}