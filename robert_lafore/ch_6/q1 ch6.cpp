#include <iostream>
using namespace std;

class Int {
private:
    int value;

public:
    Int() { value = 0; }

    Int(int v) { value = v; }

    void display() {
        cout << value;
    }

    Int add(Int b) {
        //Int temp;
        return value + b.value;
        //return temp;
    }
};

int main() {
    Int result;          // uninitialized (default becomes 0)
    Int a(20);           // initialized with 20
    Int b(30);           // initialized with 30

    result = a.add(b);   // result = 20 + 30

    cout << "Result: ";
    result.display();    // display result

    return 0;
}
