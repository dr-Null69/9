#include <iostream>
#include <thread>

int counter = 0;

void increment(int thread_id) {
    counter += thread_id;
    std::cout << "Thread " << thread_id << ": counter = " << counter << "\n";
}

int main() {
    std::thread t1(increment, 1);
    std::thread t2(increment, 2);
    std::thread t3(increment, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
