#include<bits/stdc++.h>
using namespace std;
int remDup(int arr[],int n)
{
set<int> st;
for(int  i=0;i<n-1;i++)
{
st.insert(arr[i]);
}
int index=0;
for(auto it:st)
{
    arr[index]=it;
    index++;
}
return index;
}
int remDupOpt(int arr[],int n)
{
    int first=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]!=arr[first])
      {
        arr[first+1]=arr[i];
        first++;
      }
    }
    return first;
}
int main()
{
    int arr[]={1,3,3,4,5,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int i = remDup(arr,n);
    int  i= remDupOpt(arr,n);
    for(int j=0;j<=i;j++)
{
    cout<<arr[j];
}
    return 0;
}