#include <iostream>
#include <thread>

class Fctor{
	public:
		void operator () () {
			for(int i=0;i>-100;i--)
				std::cout << "from t1: " << i << std::endl;
		}
};

int main()
{
	Fctor fct;
	std::thread t1((Fctor()));

	try{
		for(int i=0;i<100;i++) {
			std::cout << "from main: " << i << std::endl;
		}
	} catch(...) {
		t1.join();
		throw;
	}
	return 0;
}
