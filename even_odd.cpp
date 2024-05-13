#include <iostream>
using namespace std;

class even_odd {
    private:
        int a;
    public:
        void check() {
            cout << "Enter the number : " ;
            cin >> a;
            if (a%2==0) {
                cout << "Number is even." <<endl;
            }
            else{
                cout << "Number is odd " <<endl;
            }
        }
};

int main() {
    even_odd number;
    number.check();
    return 0;
}