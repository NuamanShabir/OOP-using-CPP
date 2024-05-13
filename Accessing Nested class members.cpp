/*Enclosing members cannot access the members of Nested class*/
#include <bits/stdc++.h>
using namespace std;

class Enclosing {
    private:
        int e;
        class Nested {
            int y;
        };
        Nested obj;
        void enclosingAccess(Nested obj) {
            cout << "Nested class " << obj.y;//error
        }
};

int main() {
    
    
    return 0;
}