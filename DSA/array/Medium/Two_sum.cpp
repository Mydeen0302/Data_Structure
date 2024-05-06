#include<bits/stdc++.h>
using namespace std;
vector<int>TwoSumBrute(vector<int>arr,int k)

{
    vector<int>res;
    int n=arr.size();
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
        {
if(arr[i]+arr[j] == k)
{
    res.push_back(arr[i]);
     res.push_back(arr[j]);
return res;

}
        }
    }
    return {-1,-1};
}
vector<int>TwoSumBetter(vector<int>arr,int k)
{
int n=arr.size();
map<int,int>mpp;
vector<int>ans;
int rem=0;
for(int i=0;i<n;i++)
{
rem=k-arr[i];
if(mpp.find(rem) != mpp.end())
{
ans.push_back(mpp[rem]);
ans.push_back(i);
return ans;
}
mpp[arr[i]]=i;
}
return {-1,-1};
}
vector<int>TwoSumopt(vector<int>arr,int k)
{
    sort(arr.begin(),arr.end());
    int i=0;
    int n=arr.size();
    int j=n-1;
    while(i<j)
    {
if(arr[i]+ arr[j] == k)
{
    return {i,j};
}
else if(arr[i]+arr[j] < k)
{
i++;

}
else if(arr[i]+arr[j] >k){
    j--;
}

    }
    return {-1,-1};
}
int main() {
    vector<int> arr = {3,2,4};
    int k = 7;
    vector<int> res1 = TwoSumopt(arr, k);
    cout << res1[0] << " " << res1[1] << endl;
    return 0;
}