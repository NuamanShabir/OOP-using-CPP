//program demonstrating "array of objects".
#include <iostream>
#include <string>

using namespace std;

class xyz {
	private:
		string name;
		int age;
	
	public:
		void get_data () {
			cout << "Enter name : ";
			fflush(stdin);//remove anything stored in input buffer.
			getline(cin,name);
			cout << "Enter your age : ";
			cin >> age;
		}
		void print_data () {
			cout << "Name is : " << name << endl;
			cout << "Age is : " << age << endl;
		}
}obj[3]; //global declaration.

//object can be declared globally here too.
//xyz obj[3];

int main () {
	int i;
	//object can be declared here also but will be local to main.
	//xyz obj[3];

	//calling get_data() for 3 objects.
	for(i=0;i<=2;i++) {
		obj[i].get_data();
	}
	//printing data of all 3 objects.

	cout << "Data entered :" << endl;
	for(i=0;i<=2;i++) {
		obj[i].print_data();
	}
	return 0;
}