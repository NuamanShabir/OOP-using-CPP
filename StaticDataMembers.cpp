//static members belong to class not the object.

#include <bits/stdc++.h>
using namespace std;

class Hero {
    public:
        static int timeToComplete;

};

//initialisation.
int Hero::timeToComplete=10;

int main() {
    //in order to access static members ,object isn't needed.
    cout << "Time to complete : " << Hero::timeToComplete;

    return EXIT_SUCCESS;
}