#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert node into BST
Node* insert(Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Inorder Traversal (Left, Root, Right)
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Search in BST
Node* search(Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

// Find minimum value node
Node* findMin(Node* root) {
    while (root && root->left != NULL)
        root = root->left;
    return root;
}

// Delete a node
Node* deleteNode(Node* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node with one child or no child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    Node* root = NULL;
    int choice, value;

    do {
        cout << "\n--- BST MENU ---";
        cout << "\n1. Insert";
        cout << "\n2. Inorder Traversal";
        cout << "\n3. Search";
        cout << "\n4. Delete";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                root = insert(root, value);
                break;

            case 2:
                cout << "Inorder: ";
                inorder(root);
                break;

            case 3:
                cout << "Enter value to search: ";
                cin >> value;
                if (search(root, value))
                    cout << "Found!";
                else
                    cout << "Not Found!";
                break;

            case 4:
                cout << "Enter value to delete: ";
                cin >> value;
                root = deleteNode(root, value);
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice!";
        }
    } while (choice != 5);

    return 0;
}