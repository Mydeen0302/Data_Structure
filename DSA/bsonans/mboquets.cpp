#include<bits/stdc++.h>
using namespace  std;
bool calculate(vector<int>arr,int mid,int m,int k){
int n = arr.size(); //size of the array
    int cnt = 0;
    int noOfB = 0;
    // count the number of bouquets:
    for (int i = 0; i < n; i++) {
        if (arr[i] <= mid) {
            cnt++;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;

}
int mboquetsbs(vector<int>arr,int m,int k)
{
int mini=INT_MAX;
int maxi=INT_MIN;
int n=arr.size();
for(int i=0;i<n;i++)
{
    mini=min(mini,arr[i]);
    maxi=max(maxi,arr[i]);
}
while(mini<=maxi)
{
int mid=(mini+maxi)/2;
if(calculate(arr,mid,m,k))
{
     maxi=mid-1;
}
else{
   mini=mid+1;
}
}
return mini;
}
int main()
{vector<int>arr= {7,7,7,7,13,11,12,7};
int m=2,k=3;
int ans=mboquetsbs(arr,m,k);
cout<<ans;
    return 0;
}