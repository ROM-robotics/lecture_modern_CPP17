#include <algorithm>
#include <random>
#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int main()
{
	std::string in = "C++ is easy", out;

	auto rnd_dev = std::mt19937{random_device{}()};

	const int kNLetters = 5;

	std::sample(in.begin(), in.end(), std::back_inserter(out), kNLetters, rnd_dev);

	cout << "from : " << in << endl;
	cout << "sample: " << out << endl;
}
