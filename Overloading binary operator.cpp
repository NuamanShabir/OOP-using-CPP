/* Overloading binary operators */
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

        demo operator+(demo bb) {
            demo cc;
            cc.a = a + bb.a; // used 'a' instead of 'aa.a' becoz aa is calling object.
            return cc;
        }
        demo operator-(demo bb) {
            demo cc;
            cc.a = a - bb.a;
            return cc;
        }
        demo operator*(demo bb) {
            demo cc;
            cc.a = a * bb.a;
            return cc;
        }
};

int main() {
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    cc.putdata();   
    cc=aa*bb;
    cc.putdata();
    cc=aa-bb;
    cc.putdata();

    return 0;
}