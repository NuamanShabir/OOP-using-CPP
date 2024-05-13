/* Command line arguments */
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    // for (int j=0;j<argc;j++) {
    //     cout << "Argument " << j << " is : " << argv[j] << endl;
    // }    

    //now calculating sum of numbers provided through command line.
    int sum=0;
    for(int i=1;i<argc;i++) {
        //strtol is used to change character into integer.
        int x=strtol(argv[i],NULL,10); // where 10 is the base of numbers to be passed.
        sum+=x;
    }
    cout << "Sum of arguments passed is : " << sum << endl;

    return EXIT_SUCCESS;
}