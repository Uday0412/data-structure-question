#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch=str[i];
        if(ch=='[' or ch=='{' or ch=='(')
        {
            st.push(ch);
        }
        else 
        {
            if(ch==')' and !str.empty() and st.top()=='(')
            {
                st.pop();
            }
             else if(ch==']' and !str.empty() and st.top()=='[')
            {
                st.pop();
            }
             else if(ch=='}' and !str.empty() and st.top()=='}')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}
int main()
{
    string str="(()()(()))";
    cout<<isvalid(str)<<"\n";
    return 0;
}