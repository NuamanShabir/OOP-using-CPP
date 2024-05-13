// ... (Your header includes and node class declaration)

class node {
    // ... (Your private and public members)

public:
    node *head = NULL;

    // ... (Your other functions)

    // Insertion at Start
    void insert_at_start() {
        node *newnode = new node(); // Using new for dynamic memory allocation
        get_data(newnode);
        if (head == NULL) {
            head = newnode;
            head->next = NULL;
        } else {
            node *temp = head;
            head = newnode;
            head->next = temp;
        }
    }

    // Insertion at End
    void insert_at_end() {
        node *temp = head;
        node *newnode = new node();
        get_data(newnode);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    // Deletion at End
    void delete_at_end() {
        if (head == NULL) {
            cout << "List is empty, nothing to delete." << endl;
        } else {
            node *temp = head;
            node *prev = NULL;

            while (temp->next != NULL) {
                prev = temp;
                temp = temp->next;
            }

            if (prev == NULL) {
                delete head;
                head = NULL;
            } else {
                prev->next = NULL;
                delete temp;
            }
        }
    }

    // ... (Other functions remain unchanged)
};

// ... (Your main function remains unchanged)
