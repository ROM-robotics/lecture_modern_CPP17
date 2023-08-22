#include <iostream>
using namespace std;
int main()
{
	int num=42;
	int& ref=num;
	const int& kRef = num;
	ref=0;
	cout<<ref<<" "<<num<<" "<<kRef<<endl;
	num=42;
	cout<<ref<<" "<<num<<" "<<kRef<<endl;
	ref=109;
	cout<<ref<<" "<<num<<" "<<kRef<<endl;
	//kRef = 99;
	//cout<<ref<<" "<<num<<" "<<kRef<<endl;
	return 0;
}
