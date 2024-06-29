#include<iostream>
#include<stack>
using namespace std;

void insertAtbOttOm(stack<int> &st,int x)
{
    stack(not st.empty()){
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);

    while(not temp.empty())
    {
        int curr=temp.top();
        temp.pop();
        st.push();
    }
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    insertAtbOttOm(st,100);

    while(not st.empty())
    {
        int curr=res.top();
        st.pop();
        cout<<curr<<"\n";
    }
    return 0;
}