#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Create Linked List
void createList(int n) {
    int value;
    Node *newNode, *temp;

    if (n <= 0) {
        cout << "Invalid number of nodes!\n";
        return;
    }

    cout << "Enter data for node 1: ";
    cin >> value;

    head = new Node();
    head->data = value;
    head->next = NULL;

    temp = head;

    for (int i = 2; i <= n; i++) {
        newNode = new Node();
        cout << "Enter data for node " << i << ": ";
        cin >> value;

        newNode->data = value;
        newNode->next = NULL;

        temp->next = newNode;
        temp = newNode;
    }

    cout << "Linked list created successfully!\n";
}

// Insert at end
void insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << "Node inserted successfully!\n";
}

// Delete at any position
void deleteAtPosition(int pos) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }

    Node* temp = head;

    if (pos == 1) {
        head = temp->next;
        delete temp;
        cout << "Node deleted successfully!\n";
        return;
    }

    for (int i = 1; i < pos - 1; i++) {
        if (temp->next == NULL) {
            cout << "Invalid position!\n";
            return;
        }
        temp = temp->next;
    }

    Node* delNode = temp->next;

    if (delNode == NULL) {
        cout << "Invalid position!\n";
        return;
    }

    temp->next = delNode->next;
    delete delNode;

    cout << "Node deleted successfully!\n";
}

// Display list
void display() {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }

    Node* temp = head;
    cout << "Linked List: ";

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Main menu
int main() {
    int choice, value, pos, n;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Create Linked List\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete at Position\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of nodes: ";
                cin >> n;
                createList(n);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                insertEnd(value);
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> pos;
                deleteAtPosition(pos);
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}