#include<bits/stdc++.h>
using namespace std;

int FMAbrute(vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        int c = 0;
        for(int j = i; j < n; j++) {
            if(arr[i] == arr[j]) { 
                c++;
            }
        }
        if(c > n/2) {
            return arr[i];
        }
    }
    return -1;
}
int FMABetter(vector<int>arr)
{
    int n=arr.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto  it:mpp)
    {
        if(it.second> n/2)
        {
            return it.first;
        }
    }
    return -1;
}
int  FMAopt(vector<int>arr)
{
    int n=arr.size();
    int elem;
    int count =0;
for(int i=0;i<n;i++)
{
    if(count==0)
    {
        count =1;
        elem=arr[i];
    }
    else if(arr[i] == elem)
    {
        count++;
    }
    else{
        count--;
    }
}
int c=0;
for(auto it:arr)
{
    if(it == elem)
    {
        c++;
    }
}
if(c>n/2)
{
    return elem;
}
return -1;

    
}

int main() {
    vector<int> arr = {7,7,5,7,5,1,5,7,5,5,7,7,5,7};
   // int res = FMAbrute(arr);
   //int res = FMABetter(arr);FMAopt(arr);
int res=FMAopt(arr);
cout<<res;
    return 0;
}
