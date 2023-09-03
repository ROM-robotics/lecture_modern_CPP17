#include <fstream>
#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::string fileName = "test.dat";
    std::ofstream out(fileName, std::ios_base::out | std::ios_base::binary );

    int rows = 2;
    int cols = 3;

    std::vector<float> vec(rows*cols);
    vec[0] = 190.0;
    // std::cout << vec[0] << " == " << vec.front() << std::endl;

    out.write(reinterpret_cast<char*>(&rows), sizeof(rows));
    out.write(reinterpret_cast<char*>(&cols), sizeof(cols));
    out.write(reinterpret_cast<char*>(&vec.front()), vec.size() * sizeof(float));

    out.close();

    return 0;
}