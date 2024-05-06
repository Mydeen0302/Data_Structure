#include<bits/stdc++.h>
using namespace std;
int getLSA(vector<int>arr,int k)
{
    int max_len =0;int sum =0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum +=arr[j];
            if(sum == k)
            {
                max_len=max(max_len,j-i+1);
            }
        }
    }
    return max_len;

}

int getLSABT(vector<int> arr, int k) {
    long long sum = 0;
    int max_len = 0;
    int n = arr.size();
    map<long long, int> mpp; // Change the map key type to long long
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == k) {
            max_len = max(max_len, i + 1);
        }
        long long rem = sum - k;
        if (mpp.find(rem) != mpp.end()) {
            int len = i - mpp[rem];
            max_len = max(max_len, len);
        }
        if (mpp.find(sum) == mpp.end()) {
            mpp[sum] = i;
        }
    }
    return max_len;
}
int getLSAopt(vector<int>arr,int k)
{
    int len=0,i=0,j=0;
    long long sum =arr[0];
    int n=arr.size();
    while(j<n)
    {
    while(i<=j && sum > k)
    {
        sum-=arr[i];
        i++;
    }

if(sum == k)
{
    len = j-i+1;
j++;
if(j<n){sum +=arr[j];}

    }
    return len;
}
}
    int main(){
    vector<int>arr={1,2,3,1,1,1,1};
    int k=3;
    //int res= getLSA(arr,k);
   // int res =getLSABT(arr,k);
   int res = getLSAopt(arr,k);
    cout<<res;
    return 0;
}


