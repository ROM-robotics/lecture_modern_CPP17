#include <iostream>
#include "10_singleton.hpp"

int main()
{
    auto& singleton = Singleton::getInstance();

    // do stuff with singleton , the only instance

    // Errors
    //Singleton s1;
    //Singleton s2(singleton);
    //Singleton s3 = singleton;

    return 0;
}