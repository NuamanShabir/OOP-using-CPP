/**/
#include <fstream>
using namespace std;


int main () {
    ofstream obj("bca.txt");//create file for output.
    obj << "Hi!" << endl;
    obj << "My name is Kara" << endl;

    return 0;
}