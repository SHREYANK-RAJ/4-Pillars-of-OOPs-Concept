#include <iostream>
using namespace std;

// Function to add two numbers
int sum(int x, int y) {
    return x + y;
}

// Overloaded function to add three numbers
int sum(int x, int y, int z) {
    return x + y + z;
}

int main() {
    cout << "Sum of 4 and 6 is: " << sum(4, 6) << endl;
    cout << "Sum of 3, 8 and 10 is: " << sum(3, 8, 10) << endl;

    return 0;
}
