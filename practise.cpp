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

int main(void){
    bool lock_1 = true;
    bool lock_2 = true;
    thread first___thread(print,&lock_1);
    first___thread.detach();
    while (true){
        while (lock_1 == false){
            cout << " \n Here the program is working\n\n";
            lock_1 = true;
        }
    }
    return 0;
}