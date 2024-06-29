#include<iostream>
#include<vector>
#include<deque>
using namespace std;

class sOlutiOn
{
    public:
    vector<int> maxslidingwindOw<int> &(arr,int k);
    {
        deque<int> dq;
        vector<int> res;
        for (int i = 0; i < k; i++)
        {
            while (not dq.empty() and arr[dq.back()<arr[i]])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back[i];
        for (int i = k; i < arr.size(); i++)
        {
            if(dq.front()==(i-k))
        }
        
    }
}