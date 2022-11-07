#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <mutex>
#include <ctime>
#include <chrono>
using namespace std;


void print(bool* the_lock){
    while (true){
        if (*the_lock == true)
            *the_lock = false;
        this_thread::sleep_for(chrono::milliseconds(1250));
    }
}
// void test_function_(*functor_pointer)

void the_running_thread(bool* lock_1);

// void test_2(){
//     bool lock_1 = true;
//    // bool lock_2 = true;
//   //  thread testing_thread(the_running_thread);
//     the_running_thread(&lock_1);
//     // thread first___thread(print,&lock_1);
//     // first___thread.detach();
//     while (true){
//         while (lock_1 == false){
//             cout << " \n Here the program is working\n\n";
//             lock_1 = true;
//         }
//     }
// }


int main(void){
    int* x,y;
    x = new int;
    *x = 25;
    y = 15;
    cout << " " << *x << " " << y << " \n\n";
    y = *x;
    cout << " " << *x << " " << y << " \n\n";

    return 0;
}

// void the_running_thread(bool* lock_1){
//     thread first___thread(print,&lock_1);
//     first___thread.detach();
//    // this_thread::sleep_for(chrono::seconds(259));
// }