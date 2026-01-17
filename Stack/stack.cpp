#include <iostream>

using namespace std;

#define MAX 20

class Stack
{
private:
    int stack[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top == MAX - 1)
        {
            cout << "Stack is overflow" << endl;
        }
        else
        {
            stack[top++] = value;
            cout << " pushed into the stack " << value << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << stack[top--] << "Poped from stack" << endl;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Top Element" << stack[top] << endl;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Stack Element : " << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << endl;
            }
        }
    }
};

int main()
{
    Stack a;
    int choice, value;

    do
    {
        cout << "\n 1. Push\n 2. Pop\n 3. Peek\n 4.display" << endl;
        cout << "Enter your choice : " << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter value : ";
            cin >> value;
            a.push(value);
        }
        else if (choice == 2)
        {
            a.pop();
            a.pop();
        }
        else if (choice == 3)
        {
            a.peek();
        }
        else if (choice == 4)
        {
            a.display();
        }
        else
        {
            cout << "Exit program" << endl;
        }
    }
    while (choice != 0);

    return 0;
}