#include <iostream>
using namespace std;

class Stack
{
    int capacity;
    int *arr;
    int top;

public:
    // Constructor to initialize the stack
    Stack(int c)
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    // Push Operation: Add an element to the top of the stack
    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    // Pop Operation: Remove and return the top element of the stack
    int pop()
    {
        if (this->top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN; // Corrected to use INT_MIN properly
        }
        return this->arr[this->top--]; // Return the top element and then decrement the top
    }

    // Top Operation: Return the top element without removing it
    int top1()
    {
        if (this->top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN; // Corrected to use INT_MIN properly
        }
        return this->arr[this->top];
    }

    // Check if the stack is empty
    bool isempty()
    {
        return this->top == -1; // Corrected to return a boolean value
    }

    // Find the size of the stack
    int size()
    {
        return this->top + 1;
    }

    // Destructor to free allocated memory
    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack st(10); // Corrected to initialize the stack with a capacity

    // Example usage of the stack
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top1() << endl; // Should print 30
    cout << "Stack size: " << st.size() << endl; // Should print 3

    st.pop(); // Removes 30

    cout << "Top element after pop: " << st.top1() << endl; // Should print 20
    cout << "Is stack empty? " << (st.isempty() ? "Yes" : "No") << endl; // Should print No

    return 0;
}
