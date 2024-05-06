#include<bits/stdc++.h>
using namespace std;
void rotateAraaybyOne(int arr[],int n)
{
     int temp =arr[0];
    for(int i=1;i<n;i++)
    {

arr[i-1]=arr[i];       
    }
    arr[n-1]=temp;
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
  
}
void rotatearraybyk(int arr[],int n,int k)
{
    if(k>n){
    k=k%n;
 }
 int temp[k]; // Corrected the declaration of temp[] to have a size of k

    for(int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    for(int i = k; i < n ; i++) {
        arr[i-k] = arr[i];
        
    } 
for(int i=n-k;i<n;i++)
{
    arr[i]=temp[i-(n-k)];

}
   for(int i=0;i<n;i++)
   {
    cout<<arr[i];
   }
}

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
revers(nums,0,k-1);
revers(nums,k,n-1);
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


