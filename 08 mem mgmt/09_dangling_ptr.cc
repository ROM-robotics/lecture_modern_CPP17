#include <iostream>

int main()
{
    int size = 5;
    int *ptr1 = new int[size];
    int *ptr2 = ptr1;   // point to same data

    ptr1[0] = 100;
    std::cout << "1:  " << "ptr1[0] = " << ptr1[0] << "    2:  ptr2[0] = " << ptr2[0] << std::endl;

    delete[] ptr1; // free memory
    ptr1 = nullptr;

    // data under ptr2 doesn't exist anymore
    std::cout << " ptr2[0] = " << ptr2[0] << std::endl;

    return 0;
}