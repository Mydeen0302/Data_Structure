#include<bits/stdc++.h>
using namespace std;
vector<int>generatePermu(vector<int>arr)
{
next_permutation(arr.begin(),arr.end());
return arr;
}
vector<int>generatePermutation(vector<int>&arr)
{
int n=arr.size();
int breakingpoint=-1;
for(int i=n-1;i>0;i--)
{
    if(arr[i]>arr[i-1])
    {
breakingpoint=i-1;
break;
    }

}
if(breakingpoint==-1)
{
    reverse(arr.begin(),arr.end());;
    return arr;
}
else{
for(int i=n-1;i>breakingpoint;i--)
{
    if(arr[breakingpoint]<arr[i])
    { 
        swap(arr[breakingpoint],arr[i]);
        break;
    }
}

reverse(arr.begin()+breakingpoint+1,arr.end());
}
return arr;
}
int main()
{
vector<int> arr={1,3,5,4,2};
//arr=generatePermu(arr);
arr =generatePermutation(arr);
for(auto it:arr)
{
    cout<<it;
    cout<<" ";
}
    return 0;

}