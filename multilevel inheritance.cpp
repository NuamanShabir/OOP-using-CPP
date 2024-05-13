//SINGLE LEVEL INHERITANCE.

#include <iostream>
using namespace std;
class Parent {
    protected:
        Parent () {
            cout << "I'm in parent class" << endl;
        }
};
class Child : public Parent {
    protected:
        Child() {
            cout << "I'm in child class." << endl;
        }
};
class Grandchild : protected Child {
    public:
        Grandchild() {
            cout << "I'm in grandchild class." << endl;
        }
};

int main() {
    Grandchild obj;
    return 0;
}
