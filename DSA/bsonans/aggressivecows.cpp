#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int>&arr,int j,int cows)
{
    int cntcows=1;
    int lastcow=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]-lastcow >= j)
        {
            cntcows++;
            lastcow=arr[i];
        }
        if(cntcows>=cows) return true;
    }
 return false;
      }

int agcows(vector<int>arr,int cows)
{
    sort(arr.begin(),arr.end());
    int n=arr.size();
    if(n<cows){return -1;}
    int limit=arr[n-1] - arr[0];
    for(int i=1;i<limit;i++)
    {
        if(possible(arr,i,cows))continue;
        else return i-1;
    }
}

int agcowsbs(vector<int>arr,int cows)
{
    sort(arr.begin(),arr.end());
    int n=arr.size();
    if(n<cows){return -1;}
    int high=arr[n-1] - arr[0];
    int low=1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(possible(arr,mid,cows))
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
int main()
{   vector<int>arr={4,2,1,3,6};
int cows=2;
//int ans=agcows(arr,cows);
int ans=agcowsbs(arr,cows);
cout<<ans;
    return 0;
}