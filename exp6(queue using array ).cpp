#include<iostream>
using namespace std;

int main() {
    int size, n;
    cout << "Enter size of queue: ";
    cin >> size;

    int arr[size];
    int rear = -1;
    int front = 0;
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
        rear++;
    }

    do
    {
        cout << "\n--- Queue Menu ---" << endl;
        cout << "1. Display" << endl;
        cout << "2. Push" << endl;
        cout << "3. Pop" << endl; 
        
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {

        case 1:
         if (front > rear) {
                cout << "Queue is empty" << endl;
            } else {
                cout << "Queue elements: ";
                for (int i = front; i <= rear; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;

        case 2:
         if (front == size - 1) {
                cout << "Queue is full" << endl;
            } else {
                cout << "Enter element to push: ";
                cin >> p;
                arr[++rear] = p;

                // 🔹 Display after push
                cout << "Queue after PUSH: ";
                for (int i = front; i <= rear; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;

        case 3 :     // Pop
            if (rear == -1) {
                cout << "Queue is empty" << endl;
            } else {
                cout << "Popped element: " << arr[front] << endl;
                front ++;

                // 🔹 Display after pop
                if (front >= 0) {
                    cout << "Queue after POP: ";
                    for (int i = front; i <= rear; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                } else {
                    cout << "Stack is now empty" << endl;
                }
            }
            break;

        }   
    cout << "Do you want to continue? (y/n): ";
        cin >> x;

    } while (x == 'y' || x == 'Y');

    return 0;
}

    
