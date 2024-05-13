/* Check if string is palindrome using multiple inheritance */
#include <bits/stdc++.h>
using namespace std;

class String {
    private:
        string word;
    public:
        string getword() {
            cout << "Enter the string : ";
            getline(cin,word);

            return word;
        }
};
class check_palindrome {
    private:
        int i,j;
    public:
        bool check_string(string& str) {
            for(i=0,j=str.length()-1;i<j;i++,j--) {
                if(str[i]!=str[j])
                    return false;
            }
            return true;
        }
};

class check : public String , public check_palindrome {
    private:
        bool result;
        string str;

    public:
        void result_check() {
            str = getword();
            result=check_string(str);
            if(result) {
                cout << "String is palindrome." << endl;
            }
            else 
                cout << "String is not palindrome." << endl;
        }
};

int main() {

    check obj;
    obj.result_check();
    

    return EXIT_SUCCESS;
}