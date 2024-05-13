#include <iostream>
using namespace std;
class overload_binary {
    private:
        int fact,n,i;
    public:
        void get_data() {
            cout << "Enter any number : ";
            cin >> n;
        }
        void operator * (overload_binary x) {
            fact=1;
            for(i=1;i<=n;i++) {
                x.fact=x.fact * i;
            }
            cout << "Factorial is : " << x.fact <<endl;
        }
};

int main () {
    overload_binary obj,obj1;
    obj.get_data();
    obj*obj1; //obj.*(obj1),where obj is invoking object and obj1 is parameter.
    return 0;
}

