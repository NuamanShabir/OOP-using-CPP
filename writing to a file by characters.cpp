/*writing to a file in the form of characters*/
#include <bits/stdc++.h>
using namespace std;


int main() {
    char buffer[20];//used to store the string.
    int j;//used for indexing of array.

    cout << "Enter the character : ";
    gets(buffer);//accepting characters to be inserted.

    ofstream obj("target.txt");//opening and creating of the file to which we have to write.

    j=0;//starting index of array.

    while(buffer[j] != '\0') {
        obj.put(buffer[j]);
        /*put function writes to the file identified by object 'obj'
          in the form of characters and also moves the write pointer
          to the next position after writing the character in the file.
        */
       j++;
    }

    return 0;
}