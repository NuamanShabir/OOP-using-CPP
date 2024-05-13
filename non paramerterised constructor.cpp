#include <iostream>
using namespace std;

class add {
    private:
        int a,b;
    
    public:
        add () {
            a=1;
            b=5;
            cout << "Sum is : " << a+b << endl;

        }
    
};

int main() {
    add one;

    return 0;
}