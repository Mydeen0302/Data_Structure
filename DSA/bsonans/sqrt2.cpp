#include<bits/stdc++.h>
using namespace std;
int sqr(int i,int n)
{int x=1;
    for(int j=0;j<n;j++)
    {
     x=x*i;
    }
    return x;
}
int sqr2(int mid,int n,int m)
{
    int x=1;
    for(int j=0;j<n;j++)
    {
        x=mid*x;
         if(x>m) return 2;
    }
    if(x==m) return 1;
    return 0;
}
int sqrt2(int n,int m)
{
    int low=0,high=m;
    while(low<=high)
    {
int mid= (low+high)/2;
int x= sqr2(mid,n,m);
if(x==0)
{
    low= mid+1;
}
else if(x ==2 )
{
    high =mid-1;
}
else{

    return mid;
}
    }
    return -1;
}
int squrt(int n,int m)
{
    int ans=-1;
    for(int i=0;i<m;i++)
    {
int temp= sqr(i,n);
if(temp ==m)
{
ans=i;
}
    }
    return ans ;
}
int main()
{
    int n=2,m=36;
   //int x=squrt(n,m);
   int x= sqrt2(n,m);
    cout<<x;
    return 0;
}