#include<bits/stdc++.h>
using namespace std;
int findsqrt1(int n)
{int ans=1;
    for(int i=1;i<n;i++)
    {
        if(i*i <= n)
        {
ans= i;
        }
        else{
            break;
        }
    }
    return ans;
    }
    int findsqrt2(int n)
    {
    int low=1,high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid*mid <= n)
        {
            low =mid+1;
        }
        else{
            high=mid-1;  
        }
    }
    
        return high;
    }

int main()
{int n=36;
//int ans = findsqrt1(n);
int ans = findsqrt2(n);
cout<<ans;
    return 0;}