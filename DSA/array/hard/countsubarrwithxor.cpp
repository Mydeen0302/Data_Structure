#include<bits/stdc++.h>
using namespace std;
int countsub1(vector<int>arr,int a)
{
    int count=0;
    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        for(int j=i;j<n;j++)
        {   
            int xorr=0;
            for(int k=i;k<=j;k++)
            {
            xorr=xorr^arr[k];
            }
            if(xorr == a)
            {
            count++;
            }
        }
    }
    
    return count;
}
int countsub2(vector<int>arr,int a)
{
        int count=0;
        int n=arr.size();
        for (int i = 0; i < n; i++)
        {   
            int xorr=0;
            for(int j=i;j<n;j++)
            {  
                xorr=xorr^arr[j];
            if(xorr == a)count++;
            }   
        }
        
        return count;
}
int main()
{
    vector<int>arr={4,2,2,6,4};
    int k=6;
    //int ans=countsub1(arr,k);
     int ans=countsub2(arr,k);
    cout<<ans;
    return 0;
}