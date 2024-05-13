#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class string_class{
    private: 
        string str;
        char ch;
        int capacity;

    public:
        //assigns string to string class's object.
        void get_line () {
            fflush(stdin);
            cout << "Enter the string : ";
            getline(cin, str);
        }

        //pushes character at the end of string.
        void pushback () {
            cout << "Enter the character you wan't to push : ";
            cin >> ch;
            str.push_back(ch);
        }

        //pops last character.
        void popback () {
            str.pop_back();
            //cout << "poped character is " << ch << endl;
        }

        //returns max characters string can store.
        void cap_acity () {
            cout << "Capacity of string is " << str.capacity() << endl;
        }

        //used to resize the string.
        void resize_string () {
            cout << "Enter the size :";
            cin >> capacity;
            str.resize(capacity);
        }

        //returns length of string.
        void get_length () {
            cout << "Length of string is " << str.length() << endl;
        }

        //used to exclude unused space of string.
        void shrinktofit () {
            str.shrink_to_fit();
        }

        //print string.
        void print_string () {
            cout << str;
        }
};
int main() {
    string_class obj;
    int choice, tru;
    tru=1;

    //CHOICES.
    cout << "Enter" << endl;
    cout << "1 for getline()" << endl;
    cout << "2 for push_back()" << endl;
    cout << "3 for pop_back()" << endl;
    cout << "4 for capacity()" << endl;
    cout << "5 for resize()" << endl;
    cout << "6 for length()" << endl;
    cout << "7 for shrink_to_fit()" << endl;
    cout << "8 for printing string" << endl;
    cout << "9 to exit." << endl;

    while(tru) {
        cout << "Enter your choice : " ;
        cin >> choice;

        switch(choice) {
            case 1:
                obj.get_line();
                break;
            case 2:
                obj.pushback();
                break;
            case 3:
                obj.popback();
                break;
            case 4:
                obj.cap_acity();
                break;
            case 5:
                obj.resize_string();
                break;
            case 6:
                obj.get_length();
                break;
            case 7:
                obj.shrinktofit();
                break;
            case 8:
                obj.print_string();
                break;
            case 9:
                exit(1);
                break;
            default:
                cout << "Wrong Choice." << endl;
        }

        cout << endl << "Do you wan't to continue [1/0] : ";
        cin >>tru ;
    }    
    return 0;
}
