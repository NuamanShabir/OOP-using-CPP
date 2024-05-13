#include <fstream>
using namespace std;
#define max 50

int main () {
    char buffer[max];
    ifstream infile("bca.txt");

    while(!infile.eof()) {
        inflile.getline(buffer,max);
        cout << buffer << endl;
    }

    return 0;
}