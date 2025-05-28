#include <iostream>
#include <thread>
using namespace std;

void func(int i) {
    cout << "hello " << i << endl;
}

int main() {
    for (int i = 0; i < 5; i++) {
        thread t0(func, i);
        t0.join();
    }
    return 0;
}