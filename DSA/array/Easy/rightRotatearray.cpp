#include<bits/stdc++.h>
using namespace std;

void revers(vector<int>&nums,int a,int b)
{
    
while(a<=b)
{
    swap(nums[a],nums[b]);
    a++;
    b--;
}
}
void rotateArrayOpt(vector<int>&nums,int k)
{
if(k>nums.size())
{
    k=k% nums.size();
}
int n=nums.size();
revers(nums,n-k,n-1);
revers(nums,0,n-k-1);
revers(nums,0,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
   // rotateAraaybyOne(arr,n);
 int k = 2;
 
 //rotatearraybyk( arr, n, k);
 vector<int>nums={-1,-100,3,99};
 rotateArrayOpt(nums,k);
 for(auto it:nums)
 {
    cout<<it<< " ";
 }
    return 0;
}