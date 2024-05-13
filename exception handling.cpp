/*Demostration of simple 'try','throw','catch' */
#include <bits/stdc++.h>
using namespace std;


int main() {
    int a,b;
    try{
        cout << "Enter divident and divisor : ";
        cin >> a >> b;

        if(b==0) {
            throw 0;
        }
        else {
            cout << "Division result is : " << a/b << endl;
        }
    }
    catch(int x) {
        cout << "Division not possible." << endl;
    }


    return 0;
}