#include<iostream>
using namespace std;
int main()
for (j=1;j<=5;j=j+1)

for ( int i=1 ;i<=5 ; i=i+1)
{
    cout<<"*"<<" ";
}




#include <bits/stdc++.h>
using namespace std;

// Node of Linked List
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Stack using Linked List
class LinkedStack {
public:
    Node *top;

    // Constructor
    LinkedStack() {
        top = NULL;
    }

    // Push operation
    void push(int x) {
        Node *newNode = new Node(x);
        newNode->next = top;
        top = newNode;

        cout << x << " pushed into stack" << endl;
    }

    // Pop operation
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        Node *temp = top;
        int value = temp->data;

        top = top->next;
        delete temp;

        return value;
    }

    // Peek operation
    int peek() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        return top->data;
    }

    // Check empty
    bool isEmpty() {
        return top == NULL;
    }

    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty, nothing to display" << endl;
            return;
        }

        cout << "Stack elements are: ";

        Node *temp = top;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    LinkedStack s;

    int choice, x;

    do {
        cout << "\n***** Stack Operations Using Linked List *****\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter element to push: ";
            cin >> x;
            s.push(x);
            break;

        case 2:
            x = s.pop();
            if (x != -1)
                cout << "Popped element: " << x << endl;
            break;

        case 3:
            x = s.peek();
            if (x != -1)
                cout << "Top element: " << x << endl;
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }

    } while(choice != 5);

    return 0;
}
