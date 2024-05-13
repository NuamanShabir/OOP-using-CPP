#include <iostream>
using namespace std;

class prime {
    private:
        int upper_limit,lower_limit,i,j;
    public:
        void get_data();
        void get_series();
};

void prime::get_data () {
    cout << "Enter the lower limit and upper limit : " ;
    cin >> lower_limit >> upper_limit;
}

void prime::get_series () {
    for (i=lower_limit; i<=upper_limit; i++) {
        j=2;
        while(j<=i) {
            if(i%j==0) {
                break;
            }
            j++;
        }
        if(j==i) {
            cout << j << " is prime." << endl;
        }
        else {
            continue;
        }
    }
}

int main() {
    prime numbers;
    numbers.get_data();
    numbers.get_series();

    return 0;
}