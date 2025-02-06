#include<stdio.h>
#include<iostream>
using namespace std;
/*
int find(int r,int c)
{   int rfactorial=1;
    int cfactorial=1;
    int rcfactorial=1;
    for(int i=2;i<=r;i++)
    {
         rfactorial *=i;
    }
    for(int i=2;i<=c;i++)
    {
        cfactorial*=i;
    }
    
    for(int i=2;i<=r-c;i++)
    {
          rcfactorial*=i;
    }
    return rfactorial/(cfactorial*rcfactorial);
}*/
int find(int r,int c)
{    int j=r;
int answer=1;
    for(int i=1;i<=c;i++)
    {
        answer  *= j;
        answer  /= i;
        j--;
    }
    return answer;
}
int main()
{
   cout<<find(5,1);
    return 0;
}
