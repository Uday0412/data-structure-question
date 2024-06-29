#include<iostream>
using namespace std;

int unique(int arr[],int n)
{
    int xOrsum=0;
    for (int i = 0; i < n; i++)
    {
        xOrsum=xOrsum^arr[i];
    }
    return xOrsum;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<unique(arr,n);
    return 0;
}