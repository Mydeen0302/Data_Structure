#include<bits/stdc++.h>
using namespace std;
int maxprduct(vector<int>arr)
{int maxi=arr[0] ;
  
    for (int i = 0; i < arr.size(); i++) {
        int count = arr[i];
        for (int j = i + 1; j < arr.size(); j++) {
            maxi = max(maxi, count);
            count *= arr[j];
        }
        maxi = max(maxi, count);
    }
    
    return maxi;
}
int maxprductopt(vector<int>arr){
    long long maxi=INT_MIN;
long long prefixsum=1;
long long sufixsum=1;
    for(int i=0;i<arr.size();i++)
    {  if(prefixsum==0) prefixsum=1;
        prefixsum*=arr[i];
        maxi=max(maxi,prefixsum);
    }
      for(int i=arr.size() - 1;i>0;i--)
    {  if(sufixsum==0) sufixsum=1;
        sufixsum+=sufixsum*arr[i];
        maxi=max(maxi,sufixsum);
    }
    return maxi;
}
int main()
{
    vector<int>arr={1,2,-3,0,-4,-5};
  // int ans=maxprduct(arr);
    int ans=maxprductopt(arr);
    cout<<ans;
    return 0;
}