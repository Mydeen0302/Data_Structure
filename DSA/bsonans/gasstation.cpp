#include<bits/stdc++.h>
using namespace std;
long double findminimizemaxdistance(vector<int>&arr,int k)
{int n=arr.size();
    vector<int>howmanystaion(n-1,0);
for(int i=1;i<=k;i++)
{
    long double maxval=-1;
    int maxind=-1;
    for(int j=0;j<n-1;j++)
    {
        long double diff=arr[j+1] - arr[j];
        long double sectionlen=diff/(long double)(howmanystaion[j]+1);
        if(maxval<sectionlen)
        {
            maxval=sectionlen;
            maxind=j;
        }
    }
if (maxind != -1) {
            howmanystaion[maxind]++;
        }
}
 long double  maxval2=INT_MIN;
for(int i=0;i<n-1;i++)
{
long double diff2=arr[i+1]-arr[i];
long double sectionlen2 = diff2/(long double)(howmanystaion[i]+1);
if(maxval2 < sectionlen2)
{
    maxval2=sectionlen2;
} 
}
return maxval2;
}
long double findminimizemaxdistancebetter(vector<int>&arr,int k)
{
    int n=arr.size();
    vector<int>howmanystaion(n-1,0);
    priority_queue<pair<double,int>>queue;
    for(int i=0;i<n-1;i++)
    {
        int diff=arr[i+1]-arr[i];
        queue.push({arr[i+1]-arr[i],i});
    }

for(int i=1;i<=k;i++)
{
    auto top= queue.top() ;
     queue.pop();
    int section = top.second;
    howmanystaion[section]++;
    long double diff= arr[section+1]- arr[section];
    long double distance = diff/(long double)(howmanystaion[section]+1);
   queue.push({distance,section});
}
return queue.top().first;
}
int main()
{
    vector<int>arr={1,13,17,23};
int gas_stations=5;
//long double distance = findminimizemaxdistance(arr,gas_stations);
long double distance = findminimizemaxdistancebetter(arr,gas_stations);
cout<<distance;
    return 0;
}