#include <iostream>
#include <stack>
using namespace std;

stack<int> copystack(stack<int>& input) // Corrected parameter name from 'intput' to 'input'
{
    stack<int> temp;
    while(!input.empty()) // Corrected the syntax for checking if the stack is empty
    {
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }

    stack<int> result;
    while(!temp.empty()) // Corrected the syntax for checking if the stack is empty
    {
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    stack<int> res = copystack(st);

    while(!res.empty()) // Corrected the syntax for checking if the stack is empty
    {
        int curr = res.top();
        res.pop();
        cout << curr << endl;
    }
    return 0;
}
