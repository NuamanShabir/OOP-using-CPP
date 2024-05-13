#include <iostream>
#include <string>
using namespace std;

class overload {
    private:
        int fact,i,n;
    public:
        overload () {
            fact=1;
            cout << "Enter the number : ";
            cin >> n;
        }
        void operator++ () {
            for(i=1;i<=n;i++) {
                fact=fact*i;
            }
            cout << "Factorial is : " << fact << endl;
        }
}obj;
int main() {
    ++obj;
    return 0;
}