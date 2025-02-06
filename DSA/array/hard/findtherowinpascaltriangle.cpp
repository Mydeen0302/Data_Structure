#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
vector<int>find(int n)
{
  if(n==1) return {1};
  vector<int>res;
  int ans=1;
  res.push_back(1);
  for(int i=1;i<n;i++)
  {
      ans *= n-i;
      ans /= i;
      res.push_back(ans);
  }
  return res;
}
int main()
{
    vector<int>ans=find(6);
    for(auto it:ans)
    {
        cout<<it;
    }
    return 0;
}