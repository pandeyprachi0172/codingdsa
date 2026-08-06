#include<iostream>
using namespace std;

class stack
{
    int *arr;
    int top;
    int size;

public:
    // Constructor
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[size];
    }

    // Push
    void push(int value)
    {
        if(top == size - 1)
        {
            cout << "Stack Overflow\n";
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " into the stack\n";
        }
    }

    // Pop
    void pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow\n";
        }
        else
        {
            top--;
        }
    }

    // Peek
    int peek()
    {
        if(top == -1)
        {
            cout << "Stack is empty\n";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    // IsEmpty
    bool IsEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Size
    int IsSize()
    {
        if(top == -1)
        {
            return 0;
        }
        else
        {
            return top + 1;
        }
    }
};

int main()
{
    stack s(5);

    s.push(5);
    s.push(-1);

    cout << s.peek() << endl;

    s.pop();
    s.pop();

    cout << s.peek() << endl;

    return 0;
}