#include <iostream>
#include <cmath>
int main()
{
    double *data = nullptr;
    size_t size = std::pow(1024, 3)/ 8;  // Produce 1GB

    for(int i=0; i<4; ++i)
    {
        // Allocate memory for the data
        data = new double[size];
        std::fill(data, data + size, 1.23);

        // Do some important work with the data here.
        std::cout << "Iteration: " << i << " done. " << (i+1) << " GiB has been allocated!" << std::endl;
    }

    // This will only free the last allocation!
    delete[] data;
    int unused;
    std::cin >> unused; // wait for user
    return 0;
}