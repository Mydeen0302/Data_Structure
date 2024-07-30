#include<bits/stdc++.h>
using namespace std;    
vector<int>findbrute(vector<int>arr)
{
int n=arr.size();

vector<int>ans;
int miss=0,repeat=0;
for(int i=1;i<=n;i++)
{int count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==i)
        {
            count++;
        }
    }
    if(count ==2 ){ miss=i;}
    else if(count ==0){repeat=i;}
}
ans.push_back(repeat);
ans.push_back(miss);
return ans;
}
vector<int>findbetter(vector<int>arr)
{int n=arr.size();
int freq[n+1]={0};
vector<int>ans;
for(int i=0;i<n;i++)
{
    freq[arr[i]]++;
}
int miss=0,repeat=0;
for(int i=0;i<n+1;i++)
{
    if(freq[i]==0)
    {
        miss=i;
    }
    else if(freq[i]==2)
    {
        repeat=i;
    }
}
ans.push_back(repeat);
ans.push_back(miss);
return ans;
}vector<int> findopt(vector<int>& arr) {
    long long n = arr.size();
    long long Sn = n * (n + 1) / 2;
    long long Sn2 = (n * (n + 1) * (2 * n + 1)) / 6;
    long long S = 0, S2 = 0;

    for (int i = 0; i < n; i++) {
            S += arr[i];
            S2 += arr[i] * arr[i];
    }

    long long val1 = S - Sn;
    long long val2 = S2 - Sn2;
    val2 = val2 / val1;
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return { (int)x, (int)y };
}
int main()
{   vector<int>arr={3,1,2,5,4,6,7,5};
//vector<int>ans=findbrute(arr);
//vector<int>ans=findbetter(arr);
vector<int>ans=findopt(arr);

for(auto ot:ans)
{
    cout<<ot;
}
    return 0;
}