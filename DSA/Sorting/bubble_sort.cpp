#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
for(int i=0;i<n-1;i++)

{
    int didswap=0;
    for(int j=0;j<n-i-1;j++)
    {
if(arr[j]>arr[j+1])
{
    swap(arr[j],arr[j+1]);
    didswap=1;
}
    }
    if(didswap==0)
    {
        cout<<"break";
        break;
    }
}
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