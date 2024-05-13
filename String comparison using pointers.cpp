//COMPARISON OF TWO STRINGS USING POINTERS.

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class xyz {
    private:
        char str1[20],str2[20],*p1,*p2; //STRING AND POINTER DECLARATIONS.
        int flag;// VARIABLE FOR FINAL RESULT.

    public:
        //GETTING TWO STRINGS
        void get_data() {
            cout << "Enter the first string: " << endl;
            gets(str1);
            cout << "Enter the second string: " << endl;
            gets(str2);
        }
        void string_comp() {
            p1=str1; 
            p2=str2;
            flag=0;

            if(strlen(str1)==strlen(str2)) {
                while( (*p1 != '\0') && (*p1 != '\0')) {
                    if(*p1 == *p2) {
                        p1++;
                        p2++;
                    }
                    else {
                        flag=1; //CHANGING FLAG VALUE.BECAUSE SOME CHARACTER WASN'T SAME.
                        break;//BREAK OUT OF LOOP , BECAUSE THERE IS NOT POINT IN CONTINUATION.
                    }
                }
                if(flag==0) {
                    cout << "Strings are same." << endl;
                }
                else {
                    cout << "Strings are not same." << endl;
                }
            }
            else { //ELSE OF STRING LENGTH.
                cout << "Strings are not comparable." <<endl;
            }
        }
}obj;

int main() {
    obj.get_data();
    obj.string_comp();
    return 0;
}