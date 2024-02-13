#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,4,4,5,1};
    unordered_map<int,int>mpp;
    for(int i=0;i<sizeof(a) / sizeof(a[0]);i++)
    {
mpp[a[i]]++;  //map<a[i], val++> 
    }
    int  min =INT_MAX;
    int max=INT_MIN;

    int min_ele,max_ele;
    for(auto it:mpp)
    {
       if(it.second>max)
       {
        max=it.second;
        max_ele=it.first;
       } 
         if(it.second<min)
       {
        min=it.second;
        min_ele=it.first;
       } 
    }
cout<<max_ele;
cout<<min_ele;

    return 0;
}