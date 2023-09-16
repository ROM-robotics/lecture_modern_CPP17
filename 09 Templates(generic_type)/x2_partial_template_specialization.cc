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

template <>
std::string addAll(std::vector<std::string> list) {
	int count = 0;
	for(const std::string& elem: list) {
		for(const char& chr: elem) {
			count += chr;
		}
	}
	std::ostringstream ostr;
	ostr << count;
	std::string str_count = ostr.str();
	return str_count;
}

int main() {
	std::vector<int> my_int_vect = {4,3,2,5,6,1};
	std::vector<double> my_double_vect = {4.0,3.0,2.0,5.0,6.0,1.0};

	std::cout << addAll(my_int_vect) << std::endl;
	std::cout << addAll(my_double_vect) << std::endl;

	std::vector<std::string> my_string_vect = {"abc", "def", "ghijk"};
	std::cout << addAll(my_string_vect) << std::endl;

	return 0;
}

// template သုံးတိုင်း data type အားလုံးအတွက် generic function/class တွေရပြီဆိုပေမဲ့ အချို့
// အခြေအနေတွေအတွက်တော့ အဆင်မပြေသေးပါဘူး။ အပေါ်မှာဆိုရင် int, float တွေအတွက် ပေါင်းခြင်းက 
// အဆင်ပြေပေမဲ့ string တွေအတွက်ကျတော့ generic function က အဆင်မပြေဘူး။ အဲ့ဒီတော့ ..
// ကျတော်တို့သုံးချင်တဲ့ data type , ဒီဥပမာအတွက်ဆိုရင် 
// string data type အတွက် တချို့အပိုင်းတွေ specialize လုပ်ပေးဖို့လိုပါတယ်
// ဘယ်လိုလုပ်ရမလဲဆိုတော့ template အလွတ် template <> ထည့်ပြီး
// အပေါ် template မှာသုံးထားတဲ့အတိုင်း return နဲ့ input type တို့ကို တူအောင်လုပ်ပြီး
// string အသုံးပြုမဲ့ generic function ရဲ့ behavior ကို implement လုပ်နိုင်ပြီဖြစ်ပါတယ်။
// ကျန်တဲ့လ datatype တွေကတော့ အပေါ်က ကောင်နဲ့ သွားရမှဖြစ်ပါတယ်။
// ဒါသည် specialization of particular data type ပါပဲ။