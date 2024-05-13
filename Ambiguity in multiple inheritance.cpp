/*Ambiguity in multiple inheritance.*/
#include <bits/stdc++.h>
using namespace std;

class Entity1 {
    public:
        void message() {
            cout << "My name is Connor." << endl;
        }
};
class Entity2 {
    public:
        void message() {
            cout << "My name is Cara." <<endl;
        }
};
class Entity3 : public Entity1, public Entity2 {
    public:
        void message2() {
            cout << "Hi! I am Chloe." << endl;
        }
};

int main() {
    Entity3 obj;
    // obj.message(); is an ambigiuous call as there are defnitions of message in both base classes.
    // solution is :
    obj.Entity1 :: message();
    obj.Entity2 :: message();
    //now calling the message of derived class.
    obj.message2();
    return 0;
}