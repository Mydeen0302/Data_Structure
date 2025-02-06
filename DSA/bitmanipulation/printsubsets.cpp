#include<bits/stdc++.h>
using namespace std;
bool checksetbit(int i,int j)
{
    if((i>>(j)) & 1) return true;
    else return false;
}
 vector<vector<int>> printsubset(vector<int>arr)
 {
    int n=arr.size();
    vector<vector<int>>anslist;
    for(int i=0;i< (1<<n);i++)
    {   vector<int>list;
        for(int j=0;j<n;j++)
        {
          if(checksetbit(i,j)) list.push_back(j+1);
        }
        anslist.push_back(list);
    }
    return anslist;
 }
 int main()
 {
    vector<int>arr ={1,2,3};
    vector<vector<int>>list = printsubset(arr);
  for(int i=0;i<list.size();i++)
  {
    for(int j=0;j<list[i].size();j++)
    {
          cout<<list[i][j];
    }
    cout<<endl;
  }
 }