#include<bits/stdc++.h>
using namespace  std;
vector<vector<int>> brute4sum(vector<int>arr,int x)
{
    set<vector<int>>set;
    int n=arr.size();
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            for(int l=k+1;l<n;l++)
            {
                if(arr[i]+arr[j]+arr[k]+arr[l] == x)
                {
                    vector<int>temp ={arr[i],arr[j],arr[k],arr[l]};
                    sort(temp.begin(),temp.end());
                    if(set.empty()|| set.find(temp) == set.end())
                    {
                     set.insert(temp);   
                    }
                }          
            }
        }
    }
}
    vector<vector<int>>ans(set.begin(),set.end());
    return ans;
}
vector<vector<int>> better4sum(vector<int>arr,int x)
{   set<vector<int>>set;
    int n=arr.size();
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    { 
        std::set<int> hashset; 
        for(int k=j+1;k<n;k++)
        {
            int val = x-(arr[i]+arr[j]+arr[k]);
            if(hashset.find(val)!=hashset.end())
            {
                vector<int>temp={arr[i],arr[j],arr[k],val};
                sort(temp.begin(),temp.end());
                set.insert(temp);
            }
            hashset.insert(arr[k]);
        }
    }
}    
    vector<vector<int>>ans(set.begin(),set.end());
    return ans;
}
vector<vector<int>> opt4sum(vector<int>arr,int x)
{
sort(arr.begin(),arr.end());
int n=arr.size();
vector<vector<int>>ans;
for(int  i=0;i<n;i++)
{if(i!=0 && arr[i]==arr[i-1]) continue;
    for(int j=i+1;j<n;j++)
    {  
        if(j!=1 && arr[j] ==  arr[j-1]) continue;
        int k=j+1,l=n-1;
while(k<l)
{
    int val=arr[i]+arr[j]+arr[k]+arr[l];
    if(val <x)
    {
        k++;
    }
    else if(val> x)
    {
        l--;
    }
    else{
        vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
        ans.push_back(temp);
        k++;
        l--;
        while(k<l && arr[k-1]!=arr[k])k++;
        while(k<l && arr[l+1]!=arr[l])l--;
    }
}
    }
}
return ans;
}
int main()
{ vector<int>arr ={4,3,3,4,4,2,1,2,1,1};
int  target=9;
//vector<vector<int>>ans= brute4sum(arr,target);
//vector<vector<int>>ans= better4sum(arr,target);
vector<vector<int>>ans= opt4sum(arr,target);
for(auto it  :ans)
{ cout<<"[ ";
    for(auto x:it)
    {
        cout<<x<<" ";
    }
    cout<<" ]"<<endl;
}
    return 0;
}