#include <fstream>
#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::string fileName = "test.dat";
    int rows = 0;
    int cols = 0;
    std::ifstream in(fileName, std::ios_base::in | std::ios_base::binary );
    
    if(!in) { return EXIT_FAILURE; } 
    
    in.read(reinterpret_cast<char*>(&rows), sizeof(rows));
    in.read(reinterpret_cast<char*>(&cols), sizeof(cols));

    std::cout << "Dim: " << rows << " x " << cols << std::endl;
    std::vector<float> data(rows*cols, 0.0);

    in.read(reinterpret_cast<char*>(&data.front()), data.size() * sizeof(data.front()));

    for(float d: data)  { std::cout << d << std::endl; }

    return 0;
}