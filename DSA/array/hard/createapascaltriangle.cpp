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
vector<vector<int>>create(int n)
{
    vector<vector<int>>ans;
for(int i=1;i<=n;i++)
{
    vector<int>temp= find(i);
   ans.push_back(temp);
}
return ans;
}
int main()
{
    vector<vector<int>>ans=create(6);
    for(auto it:ans)
    {  for(auto num:it)
    {
            cout<<num;
    }
        cout<<endl;
    }
    return 0;
}