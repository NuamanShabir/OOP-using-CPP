/* Pure virtual function */
#include <bits/stdc++.h>
using namespace std;

class base {
    public:
        virtual void message() =0;
};
class derv1 : public base {
    public:
        void message() {
            cout << "Derv1 class" << endl;
        }
};
class derv2 : public base {
    public:
        void message() {
            cout << "Derv2 class" << endl;
        }
};
int main() {
    derv1 obj1;
    derv2 obj2;

    base *ptr;
    
    ptr = &obj1;
    ptr->message();

    ptr = &obj2;
    ptr->message();

    return EXIT_SUCCESS;
}