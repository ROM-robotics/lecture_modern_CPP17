#include <iostream>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

int main()
{
    std::cout << fs::path("data1.txt").filename() << std::endl;
    std::cout << fs::path("data1.txt").extension() << std::endl;
    std::cout << fs::path("data1.txt").stem() << std::endl;

    return 0;
}