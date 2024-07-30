#include<bits/stdc++.h>
using namespace std;
int larsa(vector<int>arr)
{
    int n=arr.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {int sum=arr[i];
    if(sum == 0)
    {  if(ans<i+1)ans=1;
    }
        for(int j=i+1;j<n;j++)
        {
            sum +=arr[j];
        if(sum==0 && ans<(j-i)+1)
        { 
        ans=(j-i)+1;
        }
        }
       
    }
    return ans;
}
int larsaopt(vector<int>arr)
{
    int maxi=0;
    int n=arr.size();
    int sum=0;
    map<int,int>map;
    for(int i=0;i<n;i++)
    {
    sum+=arr[i];
    if(sum == 0)
    {
        maxi = i+1;
    }
    else{
        if(map.find(sum) == map.end())
        {
            map[sum] =i;
        }
        else{
            int len = i - map[sum];
            if(len>maxi)
            {
                maxi=len;
            }
        }
    }
    }
    return maxi;
}
int main()
{
    vector<int>arr={1, 3, -5, 6, -2};
   // int ans= larsa(arr);
   int ans =larsaopt(arr);
    cout<<ans;
    return 0;
}