/*Multiple inheritance.*/

#include <bits/stdc++.h>
using namespace std;

class parent1 {
    protected:
        int a;
    public:
        void get_data() {
            a=10;
        }
};
class parent2 {
    protected:
        int b;
    public:
        void get_data1() {
            b=20;
        }
};
class Child : public parent1 , public parent2 {
    protected:
        int s;
    public:
        void sum() {
            s=a+b;
            cout << "sum is : " << s << endl;
        }
};
int main() {
    Child obj;
    obj.get_data();
    obj.get_data1();
    obj.sum();
    return 0;
}