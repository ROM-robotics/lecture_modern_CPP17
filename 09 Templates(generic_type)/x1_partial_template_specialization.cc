#include <vector>
#include <iostream>
#include <sstream>

template <typename T>
T addAll(std::vector<T> list) {
	T count = 0;
	for(auto &elem : list) {
		count += elem;
	}
	return count;
}

int main() {
	std::vector<int> my_int_vect = {4,3,2,5,6,1};
	std::vector<double> my_double_vect = {4.0,3.0,2.0,5.0,6.0,1.0};

	std::cout << addAll(my_int_vect) << std::endl;
	std::cout << addAll(my_double_vect) << std::endl;

	//std::vector<string> my_string_vect = {"abc", "def", "ghijk"};
	//std::cout << addAll(my_string_vect) << std::endl;

	return 0;
}

// template သုံးတိုင်း data type အားလုံးအတွက် generic function/class တွေရပြီဆိုပေမဲ့ အချို့
// အခြေအနေတွေအတွက်တော့ အဆင်မပြေသေးပါဘူး။ အပေါ်မှာဆိုရင် int, float တွေအတွက် ပေါင်းခြင်းက 
// အဆင်ပြေပေမဲ့ string တွေအတွက်ကျတော့ generic function က အဆင်မပြေဘူး။ အဲ့ဒီတော့ 