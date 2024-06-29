#include<iostream>
#include<stack>
using namespace std;

int isvalid(string str)
{
    stack<char> st;
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            st.push('(');
        }
        else 
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                count++;
            }
        }
    }
    return count + st.size(); // Add remaining unmatched parentheses to count
}

int main()
{
    string str = ")()";
    cout << isvalid(str) << "\n";
    return 0;
}
