#include<stdio.h>
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
/*
int findsinglenumber(vector<int>arr)
{
    unordered_map<int,int>mpp;
    for(const int &it:arr)
    {
         mpp[it]++;
    }
    for(auto it:mpp)
    {
        if(it.second == 1)
        {
            return it.first;
        } 
    }
}

*/

/*
int findsinglenumber(vector<int>arr)
{  sort(arr.begin(),arr.end());
  bool flag;
  int n=arr.size();
    for(int i=1;i<n;i+=3)
    {
        if(arr[i] != arr[i-1]){flag=false; return arr[i-1];}
    }
    if(!flag)
    {
        return arr[n-1];
    }
}
*/
int findsinglenumber(vector<int>arr)
{ 
    int ones=0,twos=0;
    for(auto it:arr)
    {
        ones =(it^ones) & (~twos);
        twos =(it^twos) & (~ones);
    }
    return ones;
}


int main()
{   vector<int>arr={1,2,3,1,3,1,3}; 
   cout<<findsinglenumber(arr);
    return 0;
}