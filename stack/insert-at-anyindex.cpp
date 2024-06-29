#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &x, int n, int idx)
{
    stack<int> temp;
    n = st.size();
    int count = 0;

    while (count < n - idx)
    {
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);

    while (not temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}
int main()
{
    stack<int> st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    insert(st, 100, 1);
    while (not st.empty())
    {
        int curr = st.top();
        st.pop();
        cout << curr << "\n";
    }
    return 0;
}