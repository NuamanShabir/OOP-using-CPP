//constructors in Multi LEVEL INHERITANCE.
//only one constructor is invoked without this syntax.

#include <iostream>

using namespace std;
class A {
    public:
    A() {
        cout << "class A" ;
    }
};

class B : public A {
    public:
        B() :A() {
            cout << "class B";
        }
};

class C : public B {
    public:
        C() :B() {
            cout << "class C";
        }
};

int main() {
    C obj;
    return 0;
}