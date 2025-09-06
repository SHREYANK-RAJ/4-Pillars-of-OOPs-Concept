#include<iostream>
using namespace std;

class Animal {
public:
    int age;

    void speak() {
        cout<<"speaking..."<<endl;
    }
};

class Dog {
public:
    int age;

    void bark() {
        cout<<"barking..."<<endl;
    }
};

class Puppy : public Animal, public Dog {
    // Inherits both Animal and Dog
};

int main() {
    Puppy obj;

    obj.speak(); // from Animal
    obj.bark();  // from Dog

    return 0;
}
