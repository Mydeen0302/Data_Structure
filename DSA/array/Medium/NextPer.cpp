#include<bits/stdc++.h>
using namespace std;
vector<int>NextPermu1(vector<int> arr)
{
vector<int>arr1;
int index=0;
for(int i=arr.size()-1;i>=0;i--)
{
    arr1[index]=arr[i];
    index++;
}
return arr1;
}
int main()
{
  vector<int>arr={1,2,3};
 arr=NextPermu1(arr);
  for(auto it :arr)
  {
    cout<<it<<" ";
  }
    return 0;
}