#include <iostream>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

int main()
{
    fs::create_directories("sandbox/a/b");
    std::ofstream("sandbox/file1.txt");
    std::ofstream("sandbox/file2.txt");

    for ( auto & entry : fs::directory_iterator("sandbox") )
    {
        std::cout << entry.path() << std::endl;
    }

    //fs::remove_all("sandbox");

    return 0;
}