#include <iostream>
#include <vector>
#include <numeric>

template <typename T, size_t N=10>
T accumulateVector(const T& val)
{
    std::vector<T> vec(val,N);
    return std::accumulate(vec.begin(),vec.end(), 0); // 0 to add summation of vectors
};

int main()
{
    std::cout << accumulateVector(1) << std::endl;
    std::cout << accumulateVector<float>(2) << std::endl;
    std::cout << accumulateVector<float, 5>(2.0) << std::endl; // teplate parameter

    return 0;
}