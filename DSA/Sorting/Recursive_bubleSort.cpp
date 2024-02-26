#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    if(n==1)
    {
        return;
    }
  
    for(int i=0;i<=n-2;i++)
    {
      if(arr[i]>arr[i+1])
      {
        swap(arr[i],arr[i+1]);
      }
    }
   
bubble_sort(arr,n-1);
}

int main()
{
   int  n;
     cout<<"Enter How many elements you want to enter:"<<endl;
    cin>>n;
    int a[n];
   
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
        for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}