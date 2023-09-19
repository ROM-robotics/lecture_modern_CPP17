// TOPIC : Recursive Mutex In C++ ( std::recursive_mutex )

// Notes:
// 0. It is same as mutex but, same thread can lock one mutex multiple times using recursive_mutex.
// 1. If thread T1 first call lock/try lock on recursive mutex m1, then m1 is locked by T1, now 
//    as T1 is running in recursion T1 can call lock/try_lock any number of times there is no issue.
// 2. But if T1 have aquired 10 times lock/try_lock on mutex m1 then thread T1 will have to unlock it 10 times 
//    otherwise no other thread will be able to lock mutex m1.
// 3. How many time we can lock recursive_mutex is not defined but when that number reaches and if we were calling 
//    lock() it will return std::system_error OR if we were calling try_lock() then it will return false.

// BOTTOM LINE: 
// 0. It is similar to mutex but have extra facitility that is can be locked multiple time by same thread.
// 1. If we can avoid recursive_mutex then we should because it brings overhead to the system.
// 2. It can be used in loops also.

#include <iostream>
#include <thread>
#include <mutex>
std::recursive_mutex m1;
int buffer = 0;

void recursion(char c, int loopFor)
{
    if(loopFor < 0){
        return;
    }
    m1.lock();
    std::cout<< c << " " << buffer++ << std::endl;
    recursion(c, --loopFor);
    m1.unlock();
    std::cout<< "unlocked by thread " << c << std::endl;
}
int main(void)
{
    std::thread t1(recursion, '1', 10);
    std::thread t2(recursion, '2', 10);
    t1.join();
    t2.join();
    return 0;
}