#include <iostream>
using std::cout;
using std::endl;

class Printable {
public:
    virtual void print() const= 0; // must override
};

class Printer : public Printable {
public:
    void print() const override{
        cout << "Printer" << endl;
    }
};

class Scanner : public Printable {
public:
    void print() const override{
        cout << "Scanner" << endl;
    }
};

void Print(const Printable& p) {
    p.print();
}
int main() {
    Printable *printer = new Printer();
    Printable *scanner = new Scanner();

    printer->print();
    scanner->print();

    // Print(Printer());
    // Print(Scanner());

    return 0;
}