#include <iostream>
using namespace std;

class overload {
    private:
        int num;
    public:
        overload () {
            cout << "good morning ." << endl;
        }
        overload (int x) {
            num=x;
            if(num%2==0) {
                cout << "number is even.";
            }
        }
    
};

int main() {
    overload obj1;
    overload obj2(10);

    return 0;
}