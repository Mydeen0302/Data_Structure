#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int find(vector<int>arr,int k)
{   int low=0,high=arr.size()-1;
    while(low <= high)
    {   int mid =(low+high)/2;
    
        if(arr[mid] == k)
        {}
    }
    return 0;
}
int main()
{    vector<int>arr={4,5,6,7,8,9,10,1,2,3,4,5};
     cout<<find(arr,9);
    return 0;
}