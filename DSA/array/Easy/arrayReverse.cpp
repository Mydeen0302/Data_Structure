#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n/2;i++)
    {
        swap(arr[i],arr[n-i-1]);
    }
    for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
    return 0;
}