#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class _class {  // "_class" is the name of the class 
    private:
        char string1[100];
        char string2[100];
        int len,i,j,flag;
    public:
        void get_string () {
            cout << "Enter first string : ";
            gets(string1);
            cout << "Enter second string : ";
            gets(string2);
        }

        int str_len (string s) {
            len=0;
            i=0;
            while(s[i] != '\0') {
                len++;
                i++;
            }
            return len;
        }

        void compare () {
            flag=0;
            if(strlen(string1) == strlen(string2)) {
                i=0;
                j=0;
                while ((string1[i] != '\0') && (string2[i] !='\0')) {
                    if( string1[i] == string2 [j]) {
                        i++;
                        j++;
                    }
                    else {
                        flag=1;
                        break;
                    }
                }
                if(flag==1) {
                    cout << "Not same." << endl;
                }
                else {
                    cout << "Same." << endl;
                }
            }
            else {
                cout << "Not comparable, both don't have same size." << endl;
            }
        }
};

int main() {
    _class sen1;
    sen1.get_string();
    sen1.compare();


    return 0;
}