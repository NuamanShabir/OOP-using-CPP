/* Overloading assignment operator */
#include <bits/stdc++.h>
using namespace std;

class demo {
    private:
        int a;
    public:
        void getdata() {
            cout << "Enter a number : ";
            cin >> a;
        }
        void putdata() {
            cout << "Value is : " << a << endl;
        }

        void operator=(demo& bb) {
            a=bb.a;
        }
};

int main() {
    demo aa,bb;
    bb.getdata();
    aa=bb;
    aa.putdata();

    return 0;
}