#include <iostream>

class Strategy{
    public:
        virtual void Print() const = 0;
};

class StrategyA : public Strategy {
    public:
        void Print() const override { std::cout<<"A"<<std::endl; }
};

class StrategyB : public Strategy {
    public:
        void Print() const override { std::cout<<"B"<<std::endl; }
};

class MyClass {
    public:
        explicit MyClass(const Strategy& s) : strategy_(s) {}
        void Print() const { strategy_.Print(); }
    private:
        const Strategy& strategy_;
};

int main()
{
    StrategyA strategy_a = StrategyA();
    StrategyB strategy_b = StrategyB();

    MyClass obj1(strategy_a);
    MyClass obj2(strategy_b);

    obj1.Print();
    obj2.Print();

    return 0;
}