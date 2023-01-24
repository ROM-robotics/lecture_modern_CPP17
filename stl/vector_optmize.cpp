#include <vector>
#include <iostream>
#include <string>

int main()
{
	std::vector<int> vec;  // size 0 , capacity 0
	std::vector<int> vec2; // size 0 , capacity 0
	vec.reserve(100);      // size 0 , capacity 100
	
	for ( int i=0;i<100;i++ ) { vec.emplace_back(i); } // vec ends with size 100, capacity 100
	for ( int j=0;j<100;j++ ) { vec2.emplace_back(j);} // vec ends with size 100, capacity 128
	return 0;
}
