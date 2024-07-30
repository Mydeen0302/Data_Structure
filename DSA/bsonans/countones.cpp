#include<bits/stdc++.h>
using namespace std;
int firstoccurance(vector<int>arr)
{
    int n=arr.size();
    int low=0,high=n-1;
    int first=n;
    while(low<=high)
    {
        int mid=(low + high )/2;
        if(arr[mid]==1)
        {
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<1)
        {
            low = mid+1;
        }
    }
    return first;
}
int find(vector<vector<int>>arr,int n,int m)
{int max=0;
int ans=-1;
for(int i=0;i<n;i++)
{
    int cntones= m - firstoccurance(arr[i]) ;
    if(cntones>max)
    {
        max=cntones;
        ans=i;
    }
}
return ans;
}
int main()
{
    vector<vector<int>>arr={{0,0,1},{0,1,1},{0,0,0}};
int n=arr.size();
int m=arr[0].size();
cout<<find(arr,n,m);
    return 0;
}