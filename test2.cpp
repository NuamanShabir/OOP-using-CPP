#include <iostream>

using namespace std;

class node {
    private:
        int data;
        node *next,*prev;
    public:
        //DEClARING HEAD POINTER.
        node *head=nullptr;

        //INSERTION AT START.
        void insert_at_beginning () {
            node *newnode = new node ();
            cout << "Enter the data : ";
            cin >> newnode->data;

            if(head==nullptr) {
                head=newnode;
                newnode->next=nullptr;
                newnode->prev=nullptr;
            }
            else {
                node *temp;
                temp=head;
                newnode->next=temp;
                temp->prev=newnode;
                head=newnode;
            }
        }
        //INSERTTION AT START 2 (FUNCTION OVERLOADING).
        void insert_at_beginning (node *tmp,node *newnode) {
            tmp->prev=newnode;
            newnode->next=tmp;
            newnode->prev=nullptr;
            head=newnode;
        }
        //INSERTION AT END.
        void insert_at_end () {
            node *newnode= new node();
            cout << "Enter the data : ";
            cin >> newnode->data;

            if(head==nullptr) {
                head=newnode;
                newnode->prev=nullptr;
                newnode->next=nullptr;
            }
            else {
                node *temp;
                temp=head;
                while(temp->next!=nullptr) {
                    temp=temp->next;
                }
                temp->next=newnode;
                newnode->prev=temp;
                newnode->next=nullptr;
            }
        }

        //INSERTION AT GIVEN POSITION.
        void insert_at_random () {
            int i,position;
            i=1;
            cout << "Enter the position : ";
            cin >> position;
            node *newnode, *temp, *prevnode;
            temp=head;
            newnode =new node();
            cout << "Enter the data : ";
            cin >> newnode->data;
            if (position >list_length() || position <=0) {
                cout << "Invalid position" << endl;
            }
            else if(position==1) {
                insert_at_beginning(temp,newnode);
            }
            else {
                while(i<position) {
                    temp=temp->next;
                    i++;
                }
                prevnode=temp->prev;

                newnode->prev=prevnode;
                prevnode->next=newnode;
                temp->prev=newnode;
                newnode->next=temp;
            }
        }

        //DELETION AT START.
        void delete_at_start () {

            if(head == nullptr) {
                cout << "List is empty." << endl;
            }
            else {
                node *temp;
                temp=head;
                head=head->next;
                head->prev=nullptr;
                free(temp);
            }
        }

        //DELETION AT START 2 (FUNCTION OVERLOADING).
        void delete_at_start (node *tmp) {
            head=head->next;
            head->prev=nullptr;
            free(tmp);
        }
        //DELETION AT END.
        void delete_at_end () {
            if(head == nullptr) {
                cout << "List is empty." << endl;
            }
            else {
                node *temp, *prevnode;
                temp=head;
                while(temp->next != nullptr) {
                    temp=temp->next;
                }
                prevnode=temp->prev;
                prevnode->next=nullptr;
                free(temp);
            }
        }

        //DELETION AT GIVEN POSITION.
        void delete_at_random () {
            int i,position;
            i=1;
            node *temp, *prevnode, *nextnode;
            temp=head;
            if(head==nullptr) {
                cout << "List is empty. " << endl;
            }
            else {
                cout << "Enter the position : ";
                cin >> position;
                if(position>list_length()) {
                    cout << "Invalid position."<< endl;
                }
                else if (position==1) {
                    delete_at_start(temp);
                }
                else {
                    while(i<position) {
                        temp=temp->next;
                    }
                    prevnode=temp->prev;
                    nextnode=temp->next;
                    
                    prevnode->next=nextnode;
                    nextnode->prev=prevnode;

                    free(temp);
                }
            }
        }

        //LIST LENGTH.
        int list_length () {
            node *temp;
            int len;
            len=0;
            temp=head;
            while (temp!=nullptr) {
                temp=temp->next;
                len++;
            }
            return len;
        }

        //PRINT LIST.
        void print_list () {
            node *temp;
            temp=head;
            while(temp!=nullptr) {
                cout << temp->data << " ";
                temp=temp->next;
            }
        }
};

int main () {
    int choice,tru;
    tru=1;

    //OBJECT DECLARATION.
    node list1;
    //CHOICES.
    cout << "Enter" << endl;
    cout << "1 for insertion at start." << endl;
    cout << "2 for insertion at end." << endl;
    cout << "3 for insertion at random." << endl;
    cout << "4 for deletion at start." << endl;
    cout << "5 for deletion at end." << endl;
    cout << "6 for deletion at random." << endl;//NOT WORKING.
    cout << "7 for printing list." << endl;
    cout << "8 for exit." << endl;

    while (tru)
    {
        cout << "Enter your choice : ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                list1.insert_at_beginning();
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
                list1.delete_at_end();
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
                cout << "Wrong choice." << endl;
        }

        //asking for continuation after each operation.
        cout << endl << "Do you want to continue : ";
        cin >> tru;
    }
    
    return 0;
}