/* Only postfix is working not prefix */
#include <bits/stdc++.h>
using namespace std;

class Demo {
    private:
        int a;
    public:
        void get_data() {
            cout << "Enter the number : ";
            cin >> a;
        }
        void put_data() {
            cout << "Number is : " << a << endl;
        }
        void operator++(int ) {
            a=a+1;
        }
        void operator--(int ) {
            a=a-1;
        }
        Demo operator++() {
            
        }
};

int main() {
    Demo aa;
    aa.get_data();
    aa++;
    aa.put_data();
    aa++;
    aa.put_data();
    aa--;
    aa.put_data();


    return EXIT_SUCCESS;
}