#include<bits/stdc++.h>
using namespace std;
int calhours(vector<int>arr,int i)
{int n=arr.size();
int sum=0;
    for(int j=0;j<n;j++)
    {
       sum+=ceil((double)arr[j]/(double)i);
    }
    return sum;
}
int kokobrute(vector<int>arr,int h)
{
auto max_it = std::max_element(arr.begin(),arr.end());
int max = *max_it;
for(int i=1;i<=max;i++)
{
int totalhours = calhours(arr,i);
if(totalhours<= h)
{
    return i;
}
}
}
int kokoopt(vector<int>arr,int h)
{ auto max_it = std::max_element(arr.begin(),arr.end());
int max = *max_it;
int low=1,high=max;
int ans=-1;
while(low<high)
{
    int mid=(low+high)/2;
int toth=calhours(arr,mid);
    if(toth<=h)
    { 

     high = mid-1;
    }
    else{
          low =mid+1;
    }
}
 return low;   
}
int main()
{
    vector<int>arr={25, 12, 8, 14, 19};
    int hour=5;
    //int ans = kokobrute(arr,hour);
    int ans = kokoopt(arr,hour);
    cout<<ans;
    return 0;
}