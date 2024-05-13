#include <bits/stdc++.h>
using namespace std;

class base {
    private:
        int health;
    public:
     base() : health(0) {

     }
        void sethealth(int health) {
            //health=health;  // which replaces it's value by itself
            //this is overcome by using 'this' pointer,which points to current obj.
            this->health=health;
        }
        void gethealth() {
            cout << "Health is : " << health << endl;
        }

};


int main () {

    base obj;
    obj.sethealth(10);
    obj.gethealth();

    return EXIT_SUCCESS;
}