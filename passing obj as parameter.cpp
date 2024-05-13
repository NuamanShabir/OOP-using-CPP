#include <iostream>
using namespace std;

class _class {  // "_class" is the name of the class 
    private:
        int a,b,sum;
    public:
        void get_data () {
            cout << "Enter two numbers :" ;
            cin >> a >> b;
        }
        void _sum(_class obj1) {
            obj1.sum=obj1.a + obj1.b;
            cout << "Sum is : " << obj1.sum << endl;
        }
};

int main() {
    _class obj,obj2;
    obj2.get_data();
    obj._sum(obj2);

    return 0;
}