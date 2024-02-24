#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n)
{
for(int i=0;i<=n-1;i++)
{
    int j=i;
    while(j>0 && arr[j-1]>arr[j])
    {
        swap(arr[j-1],arr[j]);
        j--;
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
    insertion_sort(a,n);
        for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}