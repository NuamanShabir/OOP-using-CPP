/* Find the index of word found in sentence. */
#include <bits/stdc++.h>
using namespace std;

class demo {
    private:
        string sentence;
        int i;
    public:
        demo() {
            cout << "Enter the string : ";
            getline(cin , sentence);
        }
        void find_word(string& word) {
            i=sentence.find(word);
            cout << "Word found at : " << i << endl;
        }
};

int main() {
    demo str1;
    string to_be_found;
    cout << "Enter the word to be found : ";
    getline(cin,to_be_found);
    str1.find_word(to_be_found);

    return EXIT_SUCCESS;
}