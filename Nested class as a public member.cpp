/*Declaring Nested class as public member of enclosing class*/
#include <bits/stdc++.h>
using namespace std;

class Enclosing {
    public:
        class Nested {
            public:
                void print() {
                    cout << "Nested class as public member" << endl;
                }
        };
        Nested n;
};

int main() {
    Enclosing::Nested en;
    en.print();//calling member function of nested class
    
    return 0;
}