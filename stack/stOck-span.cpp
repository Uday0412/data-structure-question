#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> pge(vector<int> &arr)
{
    int a=arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> output(n,-1);

    stack<int> std;
    st.push(0);
    for (int i = 0; i < n; i++)
    {
        while(!st.empty() and arr[i]>arr[st.top()])
        {
            output(st.top()=n-i-1);
            st.pop();
        }
    }
    while(not st.empty())
    {
        output[st.pop()]=-1;
        st.pop();
    }

    reverse(output.begin(),output.end());
    reverse(arr.begin(),arr.end());
    
    return output;
}
int main()
{
    int n;
    cout<<"enetr the numebr :";
    cin>>n;
    vector<int> v;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> res=pge(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<(i-res[i])<<" ";
    }
    return 0;
}