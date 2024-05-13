#include <iostream>
using namespace std;

class factorial {
    private:
        int num,fact;
    public:
        void get_factorial() {
            cout << "Enter the number : " ;
            cin >> num;
            fact=1;
            while(num>0) {
                fact=fact*num;
                num--;
            }
            cout << "Factorial is " << fact << endl;
        }
};

int main() {
    factorial number;
    number.get_factorial();
    return 0;
}