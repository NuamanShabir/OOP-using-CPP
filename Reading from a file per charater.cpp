/*Reading from a file in the form of characters*/
#include <bits/stdc++.h>
using namespace std;


int main() {
    char x;//used to store the characters of file.
    
    ifstream obj("target.txt");//opens the file for reading purpose and assigns object to that file.

    while(!obj.eof()) { //signifies if whether EOF of file has been reached or not.
        obj.get(x);
        /*
          reads from the file identified by object 'obj' and store it in variable x.
          It also advances the pointer to the next location of file.   
        */
        cout << x;//displays the character which is read.
    }

    return 0;
}