#include<bits/stdc++.h>
using namespace std;
int findmax(vector<vector<int>>mat,int mid,int row)
{int maxi=INT_MIN;
int index;
    for(int i=0;i<row;i++)
    {  if(maxi < mat[i][mid])
    {
        maxi=max(maxi,mat[i][mid]);
        index=i;
    }
        
    }
    return index;
}
vector<int> findpeak(vector<vector<int>>mat)
{
int n=mat.size(),m=mat[0].size();
int low=0,high=m-1;
while(low<=high)
{
    int mid=(low+high)/2;
    int maxindex= findmax(mat,mid,n);
    int left = mid-1 >=0 ? mat[maxindex][mid-1]:-1;
    int right = mid+1 >=0 ? mat[maxindex][mid-1]:-1;
   if(mat[maxindex][mid]> left && mat[maxindex][mid] > right)
   {
    return {maxindex,mid};
   }
   else if(mat[maxindex][mid] <left){high =mid-1;}
   else{ low=mid+1;}
}
return {-1,-1};
}
int main()
{
    vector<vector<int>>mat={{10,20,15},{21,30,14},{7,16,32}};
    vector<int>ans=findpeak(mat);
    for(auto it :ans)
{
    cout<<it;
}
    return 0;
}