/*TODO: fix this code not working as said.*/
#include <bits/stdc++.h>
using namespace std;

class Book {
    private:
        string name;
        int pages;
        float price;
        bool easy;
    public:
        Book () {
            name="suka";
            pages=300;
            price=210;
            easy=true;
        }
        Book(Book& original) { //copy constructor
            name = original.name;
            pages = original.pages;
            price = original.price;
            easy = original.easy;
        } 
        void print_data (Book& obj) {
            cout << "Name : " << obj.name << endl;
            cout << "Pages : " << obj.pages << endl;
            cout << "Price : " << obj.price << endl;
            cout << "Hard : " << obj.easy << endl;
        }
};

int main() {
    Book one;
    one.print_data(one);
    Book two(one);//manual invokation of copy constructor.
    //or Book two = one . default copy constructor is invoked.
    one.print_data(two);



    return 0;
}