#include <iostream>

int main()
{
    int ar[] = {1,2,3};
    int* ptr = ar;
    int* ptr1 = &ar[1];
    std::cout << "ptr = " << ptr << ", ptr1 = " << ptr1 << std::endl;

    for(int i=0;i<6;++i) {
        std::cout << "ar[" << i << "] = " << ar[i] << "\t address: " << &ar[i] << std::endl;
    }

    return 0;
}