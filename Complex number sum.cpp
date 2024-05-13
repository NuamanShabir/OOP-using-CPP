/* Overloading + operator for complex number sum */
#include <bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int real,imag;
    public:
        void getdata() {
            cout << "Enter real and imaginary part : ";
            cin >> real >> imag;
        }
        void putdata() {
            cout << "Value is : " << real << "+ i" << imag <<endl;
        }

        Complex operator+(Complex bb) {
            Complex cc;
            cc.real = real + bb.real;
            cc.imag = imag + bb.imag;
            return cc;
        }
};

int main() {
    Complex aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc = aa+bb;
    cc.putdata();

    return EXIT_SUCCESS;
}