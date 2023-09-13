#include <iostream>

class Singleton
{
    private:
        Singleton() = default;
        ~Singleton() = default;

    public:
        Singleton(const Singleton&) = delete;
        void operator = (const Singleton&) = delete;

        static Singleton& getInstance()
        {
            static Singleton instance;
            return instance;
        }
};

