#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class _class {  // "_class" is the name of the class 
    private:
        char string1[50];
        char string2[50];
        char concat_str[100];
        int len,i,j;

    public:
        void get_string () {
            cout << "Enter first string : ";
            gets(string1);
            cout << "Enter second string : ";
            gets(string2);
        }

        void concat () {
            i=0;
            j=0;

            while(string1[i] !='\0') {
                concat_str[j]=string1[i];
                j++;
                i++;
            }
            concat_str[j]= ' '; // adding space between first and second string.
            j++;
            i=0;    //reinitialising 'i' for secong string.

            while(string2[i] !='\0') {
                concat_str[j]=string2[i];
                j++;
                i++;
            }
            concat_str[j]='\0'; //adding null character at end of final string.

            //printing concated string.
            puts(concat_str);
        }
};

int main() {
    _class sen1;
    
    sen1.get_string();
    sen1.concat();


    return 0;
}