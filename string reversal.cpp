#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class _class {  // "_class" is the name of the class 
    private:
        char string[50];
        char rev_string[50];
        int len,i,j;

    public:
        void get_string () {
            cout << "Enter first string : ";
            gets(string);
            
        }

        void reverse_string () {
            i=0;
            while(string[i] != '\0') { //incrementing 'i' till end of string.
                i++;
            }
            i--; //decrementing 1 from i for the last char is '\0', which we don't need.
            j=0;
            while(i>=0) {
                rev_string[j]=string[i];
                i--;
                j++;
            }
            rev_string[j]='\0';

            //printing reversed string.
            puts(rev_string);
        }

};

int main() {
    _class sen1;
    
    sen1.get_string();
    sen1.reverse_string();

    return 0;
}