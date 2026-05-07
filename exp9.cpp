#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert node
Node* insert(Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Inorder
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Preorder
void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder
void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

// Main menu
int main() {
    Node* root = NULL;
    int choice, value;

    do {
        cout << "\n--- Binary Tree Menu ---";
        cout << "\n1. Insert Node";
        cout << "\n2. Inorder Traversal";
        cout << "\n3. Preorder Traversal";
        cout << "\n4. Postorder Traversal";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                root = insert(root, value);
                cout << "Node inserted successfully!\n";
                break;

            case 2:
                if (root == NULL)
                    cout << "Tree is empty!\n";
                else {
                    cout << "Inorder Traversal: ";
                    inorder(root);
                    cout << endl;
                }
                break;

            case 3:
                if (root == NULL)
                    cout << "Tree is empty!\n";
                else {
                    cout << "Preorder Traversal: ";
                    preorder(root);
                    cout << endl;
                }
                break;

            case 4:
                if (root == NULL)
                    cout << "Tree is empty!\n";
                else {
                    cout << "Postorder Traversal: ";
                    postorder(root);
                    cout << endl;
                }
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}