#include<bits/stdc++.h>
using namespace std;
    int maxConOne(vector<int>arr)
    {
        int count =0;
        int max=INT_MIN;
        for(auto it :arr)
        {
    if(it == 1)
    {
        count++;
    }
    else{
        if(max<count)
        {
            max=count;
        }
        count=0;
    }
        }
        return max;
    }
int main()
{
    vector<int>arr={1,1,0,1,1,1,0,1,1};
    int res=maxConOne(arr);
    cout<<res;
    return 0;
}