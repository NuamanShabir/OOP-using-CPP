/* Overloading equality operator */
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

        bool operator==(demo bb) {
            if(a==bb.a) {
                return true;
            }
            else 
                return false;
        }
};

int main() {
    demo aa,bb;
    aa.getdata();
    bb.getdata();
    if(aa==bb) {
        cout << "Value is same" <<endl;
    }
    else 
        cout << "Values are different" << endl;

    return EXIT_SUCCESS;
}