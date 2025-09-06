#include<iostream>
using namespace std;

class A {
    public:
    void func1() {
        cout<<"func 1"<<endl;
    }
};

class D {
    public:
    void func4() {
        cout<<"func 4"<<endl;
    }
};

// Single Inheritance: B inherits from A
class B : public A {
    public:
    void func2() {
        cout<<"func 2"<<endl;
    }
};

// Multiple Inheritance: C inherits from both A and D
class C : public A, public D {
    public:
    void func3() {
        cout<<"func 3"<<endl;
    }
};

int main() {
    A a;
    cout<<"object a call : "<<endl;
    a.func1();

    B b;
    cout<<"object b call : "<<endl;
    b.func1(); // from A
    b.func2(); // from B

    C c;
    cout<<"object c call : "<<endl;
    c.func1(); // from A
    c.func3(); // from C
    c.func4(); // from D

    D d;
    cout<<"object d call : "<<endl;
    d.func4();

    return 0;
}
