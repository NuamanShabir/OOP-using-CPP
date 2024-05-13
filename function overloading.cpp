#include <iostream>
using namespace std;

class overload {
    private:
        int a,b,j;
    
    public:
        //SUM FUNCTION.
        void function1 () {
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << "Sum is : " << a+b << endl;
        }

        //EVEN ODD FUNCTION.
        void function1 (int x) {
            a=x;
            if(a%2==0) {
                cout << a << " is even." << endl;
            }
            else {
                cout << a << " is odd." << endl;
            }
        }

        //LARGEST NUMBER FUNCTION.
        void function1 (int a, int b, int c ) {
            if(a>b) {
                if(a>c) {
                    cout << a << " is the largest number." << endl;
                }
                else {
                    cout << c << " is the largest number." << endl;
                }
            }
            else {
                if(b>a) {
                    if(b>c) {
                        cout << b << " is the largest number." << endl;
                    }
                }
                else {
                    cout << c << " is the largest number." << endl;
                }
            }
        }
};



int main() {
    overload functions;
    functions.function1();
    functions.function1(10);
    functions.function1(12,34,11);

    return 0;
}