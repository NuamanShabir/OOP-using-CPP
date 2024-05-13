#include <bits/stdc++.h>
using namespace std;

class base {
    private:
        int a;
    public:
        base(): a(0) {

        }
        void printA();
};
void base::printA() {
    cout << a << endl;
}
int main() {
    base obj;
    obj.printA();

    return EXIT_SUCCESS;
}