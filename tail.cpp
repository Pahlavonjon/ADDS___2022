#include <iostream> // finds how many duplicates there are in the array
using namespace std;
int numDup(int arr[], int start, int size, int element) {
    int dup = size;
    int length = sizeof(arr)/sizeof(arr[0]);
    if (start >= length){
        return 0;
    }
    if (arr[start] == element) {
        dup++;
    }
    return numDup(arr,start+1,dup,element);
}
int main(void){
    int array[] = {1,2,4,4,5,6,7,4,4,10};
    cout << "\n\n"<<sizeof(array)/sizeof(array[0])<<"\n\n";
    cout << "\n\n "<<numDup(array,0,0,4)<<"\n\n";
    return 0;
}