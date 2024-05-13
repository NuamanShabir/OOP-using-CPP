#include <iostream>
#include <string.h>

using namespace std;

class _class {  // "_class" is the name of the class 
    private:
        char sentence[100]; //if you declare it as "string sentence, gets() will not work."
        int i;
    public:
        void get_string () {
            cout << "Enter a sentence : " ;
            gets(sentence);
        }

        void get_vowels () {
            i=0;
            while(sentence[i] != '\0') {
                switch(sentence[i]) {
                    case 'A':
                    case 'a':
                    case 'E':
                    case 'e':
                    case 'I':
                    case 'i':
                    case 'O':
                    case 'o':
                    case 'U':
                    case 'u':
                        cout << "on position " << i+1 << " vowel is : " <<  sentence[i] << endl;
                        break;
                }
                i++;
            }
        }
};

int main() {
    _class sen1;
    sen1.get_string();
    sen1.get_vowels();

    return 0;
}