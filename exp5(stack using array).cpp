#include <iostream>
using namespace std;

int main() {
    int size, n;
    cout << "Enter size of stack: ";
    cin >> size;

    int arr[size];
    int top = -1;
    int ch, p;
    char x;

    cout << "Enter number of elements to insert initially: ";
    cin >> n;

    if (n > size) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        top++;
    }

    do {
        cout << "\n--- Stack Menu ---" << endl;
        cout << "1. Display" << endl;
        cout << "2. Push" << endl;
        cout << "3. Pop" << endl;
        cout << "4. Is Empty" << endl;
        cout << "5. Is Full" << endl;
        cout << "6. Peek" << endl;

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {

        case 1:   // Display
            if (top == -1) {
                cout << "Stack is empty" << endl;
            } else {
                cout << "Stack elements: ";
                for (int i = 0; i <= top; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;

        case 2:   // Push
            if (top == size - 1) {
                cout << "Stack is full" << endl;
            } else {
                cout << "Enter element to push: ";
                cin >> p;
                arr[++top] = p;

                // 🔹 Display after push
                cout << "Stack after PUSH: ";
                for (int i = 0; i <= top; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;

        case 3:   // Pop
            if (top == -1) {
                cout << "Stack is empty" << endl;
            } else {
                cout << "Popped element: " << arr[top] << endl;
                top--;

                // 🔹 Display after pop
                if (top >= 0) {
                    cout << "Stack after POP: ";
                    for (int i = 0; i <= top; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                } else {
                    cout << "Stack is now empty" << endl;
                }
            }
            break;

        case 4:   // Is Empty (unchanged)
            if (top == -1)
                cout << "Stack is empty" << endl;
            else
                cout << "Stack is not empty" << endl;
            break;

        case 5:   // Is Full (unchanged)
            if (top == size - 1)
                cout << "Stack is full" << endl;
            else
                cout << "Stack is not full" << endl;
            break;

        case 6:   // Peek
            if (top == -1) {
                cout << "Stack is empty" << endl;
            } else {
                cout << "Peek element: " << arr[top] << endl;
            }
            break;

        default:
            cout << "Invalid choice" << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> x;

    } while (x == 'y' || x == 'Y');

    return 0;
}
