#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

int myAmount = 0;
std::timed_mutex m;

void increment(int i)
{
    if(m.try_lock_for(std::chrono::seconds(2)))
    {
        ++myAmount;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "Thread " << i << " Entered" << std::endl;
        m.unlock();
    }
    else{
        std::cout << "Thread " << i << "Couldn't Enter" << std::endl;
    }
}
int main(void)
{
    std::thread t1(increment,1);
    std::thread t2(increment,2);

    t1.join();
    t2.join();
    
    return 0;

}