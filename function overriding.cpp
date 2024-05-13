/*When function is redefined,on declaring object of derived class
    and calling the function , only the function of derived class is used, and the function
    of base class is overridden.*/
#include <iostream>
using namespace std;

class base {
    public:
        void message(){
            cout << "Base class" << endl;
        }
};
class derived : public base {
    public:
        void message() {
            cout << "Derived Class" << endl;
            base:message();//calling function of base class in derived class.
        }
};
int main() {
    derived obj;
    obj.message();
    obj.base::message();//calling the function of base class.cancelling overriding.

    return EXIT_SUCCESS;
}