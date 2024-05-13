#include <iostream>
#include <string.h>

using namespace std;

class _class {  // "_class" is the name of the class 
    private:
        char string[100];
        int len,i;
    public:
        void get_string () {
            cout << "Enter any string : ";
            gets(string);
        }
        int str_len () {
            len=0;
            i=0;
            while(string[i] != '\0') {
                len++;
                i++;
            }
            return len;
        }
};

int main() {
    _class sen1;
    int length;
    sen1.get_string();
    length= sen1.str_len();
    cout << "Length of string is : " << length << endl;

    return 0;
}