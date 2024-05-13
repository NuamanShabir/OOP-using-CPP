#include <iostream>
using namespace std;

class add {
    private:
        int a,b,s;
    public:
        void get_data(){
            cout << "Enter a and b : ";
            cin >>a >>b;
        }
        void sum() {
            s=a+b;
            cout << s <<endl;
        }
};
add numbers;

int main() {
    numbers.get_data();
    numbers.sum();
    return 0;
}