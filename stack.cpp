#include <iostream>
#include <string>
using namespace std;

#define SIZE 5

template <typename T>
class Stack
{
    T data[SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push()
    {
        if (top == SIZE - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }

        cout << "Enter value: ";
        cin >> data[++top];

        cout << "Value pushed into stack.\n";
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Popped value: " << data[top] << endl;
        top--;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Stack elements:\n";

        for (int i = top; i >= 0; i--)
        {
            cout << data[i] << endl;
        }
    }

    void clear()
    {
        top = -1;
        cout << "Stack cleared.\n";
    }
};

template <typename T>
void stackMenu()
{
    Stack<T> s;
    int choice;

    while (true)
    {
        cout << "\n1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                s.push();
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                return;

            default:
                cout << "Invalid choice.\n";
        }
    }
}

int main()
{
    int choice;

    while (true)
    {
        cout << "\nSTACK USING TEMPLATE\n";
        cout << "1. Integer Stack\n";
        cout << "2. Character Stack\n";
        cout << "3. Float Stack\n";
        cout << "4. Double Stack\n";
        cout << "5. String Stack\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                stackMenu<int>();
                break;

            case 2:
                stackMenu<char>();
                break;

            case 3:
                stackMenu<float>();
                break;

            case 4:
                stackMenu<double>();
                break;

            case 5:
                stackMenu<string>();
                break;

            case 6:
                cout << "Exited\n";
                return 0;

            default:
                cout << "Invalid choice.\n";
        }
    }
}