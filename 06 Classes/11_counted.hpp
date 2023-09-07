#include <iostream>

class Counted
{
    public:
        Counted() { Counted::count++; }

        ~Counted() { Counted::count--; }

        static int count;
};