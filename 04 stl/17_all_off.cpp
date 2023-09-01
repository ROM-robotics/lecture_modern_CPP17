#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

inline bool even(int i) { return i % 2 == 0; };

int main()
{
    std::vector<int> v(10, 2); // v = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2}
    for(auto i : v )
    { std::cout << i << ", "; } std::cout << std::endl;
    
    std::cout << "The first " << v.size() << " even numbers are: ";
    
    std::partial_sum(v.cbegin(), v.cend(), v.begin());
    for(auto i : v )
    { std::cout << i << ", "; } std::cout << std::endl;

    bool all_even = std::all_of( v.cbegin(), v.cend(), even);

    if(all_even) { std::cout<< "All numbers are even" << std::endl; }

    return 0;
}

