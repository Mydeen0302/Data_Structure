#include<bits/stdc++.h>
using namespace std;

int MaxSAsum(vector<int> arr) {
    int n = arr.size();
    int maxelem = INT_MIN; // Initialize maxelem to the smallest possible integer
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j]; // Change arr[i] to arr[j]
            maxelem = max(maxelem, sum);
        }
    }
    return maxelem; // Return the maximum sum found
}
int MaxSAsumOpt(vector<int>arr)
{int n=arr.size();
int maxel=INT_MIN;
int sum=0;

for(int i=0;i<n;i++)
{
    sum+=arr[i];
    
    maxel=max(maxel,sum);
if(sum<0)
{
    sum=0; 
}
}
return maxel;

}
vector<int> MaxSAprint(vector<int>arr)
{
    int n=arr.size();
    int maxel=INT_MIN,sum=0,start=0,ansstart=-1,ansend=-1;
    for(int i=0;i<n;i++)
    {if(sum==0)
    {
        start=i;
    }
        sum+=arr[i];
        if(sum>maxel)
        {
            maxel=sum;
            ansstart=start,ansend=i;
        }
    if(sum<0)
    {
        sum=0;
    }

    }
return {ansstart,ansend};
}
int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3}; // Add a semicolon here
   //int res = MaxSAsum(arr);
 //  int res=MaxSAsumOpt(arr);
vector<int>res=MaxSAprint(arr);
for(auto it:res)
{
cout<<it;
}
    return 0;
}
