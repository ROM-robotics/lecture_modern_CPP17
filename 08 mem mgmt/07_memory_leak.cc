#include <iostream>

int main()
{
    int *ptr1 = nullptr;
    int *ptr2 = nullptr;

    // Allocate memory for two bytes on the heap
    ptr1 = new int;
    ptr2 = new int;

    std::cout <<"1: " << ptr1 << " 2: " << ptr2 << std::endl;

    // Overwrite ptr2 and make it point to ptr1
    ptr2 = ptr1;

    // ptr2 overwritten, no chance to access to memory
    std::cout <<"1: " << ptr1 << " 2: " << ptr2 << std::endl;

    // Deallocate memory for two bytes on the heap
    delete ptr1;
    delete ptr2;
    //std::cout <<"1: " << ptr1 << " 2: " << ptr2 << std::endl;

    return 0;
}