#include <iostream>
#include "d:\code\object-oriented-programming\seperate.hpp"
#include "d:\code\object-oriented-programming\methods.cpp"

using namespace std;

int main() {
    song electric_relaxation;
    electric_relaxation.add_title("Electric Relaxation");

    cout << "Song name is "<< electric_relaxation.get_title <<endl;

    return 0;
}