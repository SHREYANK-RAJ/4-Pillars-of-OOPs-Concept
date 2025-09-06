#include <iostream>
using namespace std;

class Cube {
private:
    int side;

public:
    // constructor initializes side to 0
    Cube() {
        side = 0;
    }

    // declare friend function
    friend int increaseSide(Cube c);
};

// friend function definition
int increaseSide(Cube c) {
    c.side += 5;   // directly access private member
    return c.side;
}

int main() {
    Cube obj;

    cout << "Updated side of cube: " << increaseSide(obj) << endl;

    return 0;
}
