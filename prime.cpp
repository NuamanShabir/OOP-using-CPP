#include <iostream>

using namespace std;

class prime_nums{
    private:
        int num,j;
    
    public:
        void check_num(){
            j=2;
            cout << "Enter the number :" ;
            cin >> num;
            while(j<=num) {
                if(num%j==0) {
                    break;
                }
                j++;
            }
            if(j==num){
                cout << "Number is prime"<<endl;
            }
            else {
                cout << "Number is not prime"<<endl;
            }
        }
};

int main() {
    prime_nums obj;
    obj.check_num();
    
    
    return 0;
}