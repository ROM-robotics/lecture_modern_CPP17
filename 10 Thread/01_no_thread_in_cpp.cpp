#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>

typedef unsigned long long ull;

ull oddSum = 0;
ull evenSum= 0;

void findEvenSum(ull start, ull stop, ull* evenSum)
{
	std::cout << "findEvenSum" << std::endl;
	for(ull i=start; i<=stop; ++i)
	{
		if( (i&1)==0 )
		{
		       *(evenSum) += i;
		}
	}
}
void findOddSum(ull start, ull stop, ull* oddSum)
{
	std::cout << "findOddSum" << std::endl;
	for(ull i=start; i<=stop; ++i)
	{
		if( (i&1)==1 )
		{
			*(oddSum) += i;
		}
	}
}
int main()
{
	ull start = 0, end = 1900000000;

	auto startTime = std::chrono::high_resolution_clock::now();

	findEvenSum(start, end, &evenSum);
	findOddSum(start,end, &oddSum);

	auto stopTime = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stopTime - startTime);

	std::cout << "OddSum : " << oddSum << std::endl;
	std::cout << "EvenSum: " << evenSum<< std::endl;
	std::cout << duration.count()/1000000 << " seconds" << std::endl;

	return 0;
}

// g++ -std=c++11 -pthread blabla.cpp
