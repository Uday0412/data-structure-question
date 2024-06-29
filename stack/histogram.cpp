#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int histogram(vector<int> &arr)
{
    int INT_MIN;
    int n = arr.size();
    stack<int> st;
    int ans = INT_MIN;
    st.push(0);

    for (int i = 0;  i < n; i++)
    {
        while (not st.empty() and arr[i] < arr[st.top()])
        {
            int element = arr[st.top()];
            st.pop();
            int nsi = i;
            int psi=(st.empty())? (-1):st.top();
               cout<<psi<<" "<<nsi<<"\n";
            ans = max(ans, element + (nsi - psi - 1));
        }
        st.push(i);
    }
    while (not st.empty())
    {
        int element = arr[st.top()];
        st.pop();
        int nsi = n;
        int psi=(st.empty())? (-1):st.top();
        cout<<psi<<" "<<nsi<<"\n";
        ans = max(ans, element + (nsi - psi - 1));
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = histogram(v);
    cout << ans << " ";
    return 0;
}