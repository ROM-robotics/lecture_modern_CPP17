#include <iostream>

class Image
{
	public:
		Image(const std::string& filename) 
		{
			std::cout << "Constructing object" << std::endl;
		};

		void Draw(){ std::cout<< "Calling Draw() function" << std::endl; };
	
	private:
		int rows = 0;
		int clos = 0;
};


int main()
{
	Image img("some_image.pgm");
	
	img.Draw();


	return 0;
}
