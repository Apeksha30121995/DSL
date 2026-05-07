#include <iostream>
#include <stack>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Create linked list using stack
void createList() {
    stack<int> s;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.push(x);
    }

    head = NULL;
    Node* temp;

    while (!s.empty()) {
        Node* newNode = new Node();
        newNode->data = s.top();
        newNode->next = NULL;
        s.pop();

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "Linked List Created Successfully!\n";
}

// Display linked list
void display() {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }

    Node* temp = head;
    cout << "Linked List:\n";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Main menu
int main() {
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Create Linked List (using Stack)\n";
        cout << "2. Display Linked List\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createList();
                break;
            case 2:
                display();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 3);

    return 0;
}