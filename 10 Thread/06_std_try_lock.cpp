#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

int x=0, y=0;
std::mutex m1,m2;

void doSomeWrokForSeconds(int seconds)
{
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void incrementXY(int& xORy, std::mutex& m, const char* desc)
{
    for(int i=0;i<5;i++)
    {
        m.lock();
        ++xORy;
        std::cout << desc << xORy << std::endl;
        m.unlock();
        doSomeWrokForSeconds(1);
    }
}

void consumeXY()
{
    int useCount = 5;
    int xPLUSy = 0;
    while(1)
    {
        int lockResult = std::try_lock(m1,m2);
        if(lockResult == -1)
        {
            if(x!=0 && y!=0)
            {
                --useCount;
                xPLUSy += x+y;
                x = 0; y = 0;
                std::cout << "xPLUSy " << xPLUSy << std::endl;
            }
            m1.unlock(); m2.unlock();
            if(useCount==0) break;
        }
    }
}
int main(void)
{
    std::thread t1(incrementXY, std::ref(x), std::ref(m1), "X ");  // ref wrapper object
    std::thread t2(incrementXY, std::ref(y), std::ref(m2), "Y ");
    std::thread t3(consumeXY);

    t1.join();
    t2.join();
    t3.join();

    
    return 0;

}

// to be continue