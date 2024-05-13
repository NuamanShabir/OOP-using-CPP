//SINGLE LEVEL INHERITANCE.

#include <iostream>
using namespace std;
class Parent {
    protected:
        int a,b,sum;
    public:
        void get_data () {
            cout << "Enter two numbers : ";
            cin >> a >> b;
        }
};
class Child : public Parent {
    public:
        void sum () {
            sum=a+b;
            cout << "Sum is : " << sum << endl;
        }
};

int main() {
    Child obj;//here "parent class" remains abstract,as it's object wasn't declared.
    obj.get_data();
    obj.sum();
    return 0;
}
