/*Nested members can access the members of enclosing class*/
#include <bits/stdc++.h>
using namespace std;

class Enclosing {
    private:
        int b;
        class Nested {
            int y;
            void example(Enclosing obj) {
                cout << "Nested class " << obj.b;
            }
        };
};

int main() {
    Enclosing obj;
    
    return 0;
}