/*Declaring Nested class as private member of enclosing class*/
#include <bits/stdc++.h>
using namespace std;

class Enclosing {
    private:
        class Nested {
            public:
                void print() {
                    cout << "Nested class as private member" << endl;
                }
        };
        Nested n;
    public:
        void show() {
            n.print();
        }
};

int main() {
    Enclosing enc;
    enc.show();
    
    return 0;
}