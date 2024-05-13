#include <iostream>
using namespace std;

class prime {
    private:
        int num,j;
    public:
        prime (int x) {
            cout << "numbers are assigned" << endl;
            num=x;
            j=2;
        }
        void logic () {
            while(j<=num) {
                if(num%j==0) {
                    break;
                }
                j++;
            }
            if(j==num) {
                cout << j << " is Prime" <<endl;
            }
            else 
                cout << j << " is composite" << endl;
        }
};

int main() {
    int n;
    cout << "Enter the number :" ;
    cin >> n;
    prime obj(n);
    obj.logic();

    return 0;
}