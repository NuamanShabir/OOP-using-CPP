/*Demostrates access of member function using pointers.*/
#include <bits/stdc++.h>
using namespace std;

class base {
    public:
        void message () {
            cout << "Hi my name is connor." << endl;
        }
};

int main() {
    base* obj;
    obj->message();
    
    return 0;
}