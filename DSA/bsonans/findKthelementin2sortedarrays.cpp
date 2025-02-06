#include<bits/stdc++.h>
using namespace std;
int findk(vector<int>arr1,vector<int>arr2,int k)
{
    int n=arr1.size();
    int m=arr2.size();
    int i=0,j=0;
    vector<int>arr3;
    while(i<n && j<m)
    {
        if(arr1[i] <= arr2[j])arr3.push_back(arr1[i++]);
        else arr3.push_back(arr2[j++]);
    }
    while(i<n)arr3.push_back(arr1[i++]);
    while(j<m)arr3.push_back(arr2[j++]);
    return arr3[k-1];
}
int findkbetter(vector<int>arr1,vector<int>arr2,int k)
{
        int n=arr1.size();
        int m=arr2.size();
        int i=0,j=0;
        int cnt=0;
        while(i<n && j<m)
        {
            if(arr1[i] <= arr2[j]){
            if(cnt==k-1)
            {return arr1[i];
            }
        cnt++; 
            i++;
            }
            else {
                if(cnt==k-1){
                return arr2[j];}
                cnt++; 
                j++; }
        }
        while(i<n){  
            if(cnt==k-1)
            {return arr1[i];
            }
            cnt++; 
            i++;
            }
        while(j<m){
        if(cnt==k-1){return arr2[j];}
        cnt++; 
        j++;}
        return -1;
}

int main()
{
    vector<int>arr1={2, 3, 6, 7, 9};
    vector<int>arr2={1, 4, 8, 10};
    int ans=findkbetter(arr1,arr2,5);
    cout<<ans;
    return 0;
}