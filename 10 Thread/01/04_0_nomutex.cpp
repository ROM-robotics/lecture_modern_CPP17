#include <iostream>
#include <thread>
#include <mutex>

std::mutex m;

int myAmount=0;  // resource , critical area , shared resource , မင်းကြိုက်သလိုခေါ်
void addMoney()
{
    
    ++myAmount;
    
}

int main(void)
{
    std::thread t1(addMoney);
    std::thread t2(addMoney);

    t1.join();
    t2.join();

    std::cout << myAmount << std::endl;
    return 0;

}