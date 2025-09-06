#include<iostream>
using namespace std;

class Animal {
public:
    int age;

    void speak() {
        cout<<"speaking..."<<endl;
    }
};

class Dog : public Animal {
public:
    int age;

    void bark() {
        cout<<"barking..."<<endl;
    }
};

class Puppy : public Dog {
    // Inherits everything from Dog (which already inherited from Animal)
};

int main() {
    Puppy obj;

    obj.speak(); // from Animal
    obj.bark();  // from Dog

    return 0;
}
