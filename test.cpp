//header files.
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

//node class declaration.
class node {
    private:
        string name;
        int age,position,i;
        node *next;

    public:
        // HEAD POINTER.
        node *head=NULL;

        //PRINT LIST FUNCTION.
        void print_list () {
            node *temp;
            temp=head;
            while(temp!=NULL) {
                cout << "Name is " << temp->name << endl;
                cout << "Age is " << temp->age << endl;
                temp=temp->next;
            }
        }

        //GET DATA FUNCTION.
        void get_data (node *pointer) {
            cout << "Enter name : ";
            cin >> pointer->name;
            cout << "Enter age : ";
            cin >> pointer->age;
        }

        //INSERTION AT START.
        void insert_at_start () {
            node *newnode;
            newnode=new node ();

            //function call with newnode pointer as argument.
            get_data(newnode);  //BUG : Program exits when function is called.
            if(head==NULL) {
                head==newnode;
                head->next=NULL;
            }
            else {
                node *temp=head;
                head=newnode;
                head->next=temp;
                newnode->next=NULL;
            }
        }

        //INSERTION AT END.
        void insert_at_end () {
            node *temp;
            node *newnode;
            temp=head;

            while(temp!=NULL) {
                temp=temp->next;
            }
            newnode=new node();
            get_data(newnode);

            temp->next=newnode;
            newnode->next=NULL;
        }

        //INSERTION AT RANDOM.
        void insert_at_random () {
            node *currentnode, *nextnode, *newnode;

            currentnode=head;
            newnode=new node();
            if(head==NULL) {
                head=newnode;
                newnode->next=NULL;
            }
            else {
                i=0;
                cout << "Enter the postion : ";
                cin >> position;

                while(i<position) {
                    currentnode=currentnode->next;
                    i++;
                }
                nextnode=currentnode->next;

                currentnode->next=newnode;
                newnode->next=nextnode;
            }
        }

        //DELETION AT START.
        void delete_at_start () {
            node *temp;
            temp=head;
            if(head==NULL) {
                cout << "List is empty , nothing to delete." << endl;
            }
            else if (head->next==NULL) {
                free(temp);
                head==NULL;
            }
            else {
                head=head->next;
                free(temp);
            }
        }

        //DELETION AT END.
        void delete_at_end () {  
            node *temp,*prevnode;
            temp=head;
            if(head==NULL) {
                cout << "List is empty , nothing to delete." << endl;
            }
            else {
                while(temp!=NULL) {
                    temp=temp->next;
                }
                //not complete yet.
            }
        }

        // DELETION AT RANDOM.
        void delete_at_random () {
            if(head==NULL) {
                cout << "List is empty , nothing to delete." << endl;
            }
            else {
                node *temp;
                temp=head;
                cout <<  "Enter the position : ";
                cin >> position;
                i=0;
                while(i<position) {
                    temp=temp->next;
                    i++;
                }
                //not complete yet.
            }
        }

};


//MAIN FUNCITON.
int main() {
    //CREATING THE FIRST NODE.
    node list1;
    
    int choice,truth=1;

    //CHOICES.
    cout << "Enter\n1 for insertion at beginning."<< endl;
    cout << "2 for insertion at end." << endl;
    cout << "3 for insertion at random." << endl;
    cout << "4 for deletion at start." << endl;
    cout << "5 for deletion at end." << endl;
    cout << "6 for deletion at random." << endl;
    cout << "7 for printing linked list." << endl;
    cout << "8 for exit." << endl;

    //MAIN MENU.
    while(truth) {
        cout << "Enter your choice :";
        cin >> choice;

        switch (choice)
        {
            case 1:
                list1.insert_at_start();
                break;
            case 2:
                list1.insert_at_end();
                break;
            case 3:
                list1.insert_at_random();
                break;
            case 4:
                list1.delete_at_start();
                break;
            case 5:
                list1.delete_at_end(); //INCOMPLETE.
                break;
            case 6:
                list1.delete_at_random();
                break;
            case 7:
                list1.print_list();
                break;
            case 8:
                exit(1);
                break;
            default:
                cout << "Wrong choice" << endl;
                break;
        }

        //ASKING FOR CONTINUITION, AFTER EACH OPERATION ON LINKED LIST.
        cout << "Do you want to continue [1/0] : ";
        cin >> truth;
    }

    return 0;
}