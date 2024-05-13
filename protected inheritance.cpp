/*Protected inheritance.*/
#include <bits/stdc++.h>
using namespace std;

class Entity1 {
    protected:
        int a;
    private:
        int b;
};
class Derived : protected Entity1 {
    public:
        void get_data() {
            a=10;
            cout << "Value of a is " << a << endl;
            //b can't be accessed because of private access specifier
            //therefore b=15 , is invalid.
        }
};


int main() {
    Derived obj;
    obj.get_data();
    
    return 0;
}