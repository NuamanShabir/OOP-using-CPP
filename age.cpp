#include <iostream>
using namespace std;
class xyz{
    private:
        int age;
    public:
        void get_age(int );
        void print_age();
};
void xyz::get_age(int a){
    age=a;
}
void xyz::print_age() {
    cout << "age is " << age << endl;
}
int main() {
    xyz nuaman;
    nuaman.get_age(20);
    nuaman.print_age();
    return 0;
}