#include <iostream>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

void is_exists(const fs::path &p)
{
    std::cout << p;

    if(fs::exists(p))
    {
        std::cout << " exists." << std::endl;
    }
    else
    {
        std::cout << " does not exist." << std::endl;
    }
}
int main()
{
    fs::create_directories("foo/bar/a");
    std::ofstream("foo/b.txt");
    is_exists("foo/b.txt");
    is_exists("foo/a.txt");

    fs::remove_all("foo");

    return 0;
}