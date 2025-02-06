#include<bits/stdc++.h>
using namespace std;
bool bs(vector<int>&arr,int & k)
{
int low=0,high=arr.size()-1;
while(low<=high)
{
    int mid=(low+high)/2;
    if(arr[mid]==k)
    {
        return true;
    }
    else if(arr[mid] < k)
    {
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return false;
}
bool findk(vector<vector<int>>&arr,int & k)
{
int n=arr.size();
int m=arr[0].size();
for(int i=0;i<n;i++)
{
if(k>= arr[i][0] && k<= arr[i][m-1] )
{
return bs(arr[i],k);
}
}
return false;
}
int main()
{
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
    int k=9;
    findk(arr,k) == true ? cout<<"true\n":cout<<"false\n";
    return 0;
}