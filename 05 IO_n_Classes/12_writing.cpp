#include <iomanip> // for setprecision
#include <fstream>

int main()
{
    std::string filename = "data2.txt";
    std::ofstream out(filename);

    if( !out.is_open() ) { return EXIT_FAILURE; }

    double a = 3.1415;
    out << "Just string" << std::endl;
    out << std::setprecision(2) << a << std::endl;
    out.close();
    
    std::string file1 = "data1.txt";
    std::ofstream out1(file1, std::ios_base::app);
    out1 << "Hello Deep blue ai lab" << std::endl;
    out1.close();

    return 0;
}