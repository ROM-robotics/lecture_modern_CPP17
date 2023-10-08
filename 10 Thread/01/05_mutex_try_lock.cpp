#include <iostream>
#include <thread>
#include <mutex>

std::mutex m;

int myAmount=0;
void add100000()
{
    for(int i=0;i<100000;i++)
    {
        // not waiting , just skiping
        if( m.try_lock() )
        {
            //m.lock();
            ++myAmount;
            m.unlock();
        }
        /*
        {
            m.lock();
            ++myAmount;
            m.unlock();
        }
        */
    }
}

int main(void)
{
    std::thread t1(add100000);
    std::thread t2(add100000);

    t1.join();
    t2.join();

    std::cout << myAmount << std::endl;
    return 0;

}