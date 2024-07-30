#include<bits/stdc++.h>
using namespace std;
vector<int>leadersbrute(vector<int>arr)
{vector<int>leader;

for(int i=0;i<arr.size();i++)
{int leaderw=0;
    for(int j=i+1;j<arr.size();j++)
 {
    if(arr[i] <arr[j])
    {
        leaderw=1;
        break;
    }
}
if(leaderw==0)
{
    leader.push_back(arr[i]);
}
}

    return leader;
}
vector<int>leadersopt(vector<int>arr)
{
vector<int>leader;
int max=-1;
for(int i=arr.size()-1;i>=0;i--)
{
if(arr[i]>max)
{
    max=arr[i];
    leader.push_back(arr[i]);
}
}
return leader;
}
int main()
{
    vector<int>arr={0,7,8,1};
    vector<int>leader=leadersbrute(arr);
    for(auto it:leader)
    {
        cout<<it<<" ";
    }
    return 0;
}