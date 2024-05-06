#include<bits\stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
vector<int>arr1={1,2,2,3,3,4,5,6};
vector<int>arr2={2,3,3,6,6,7};
int n1=arr1.size();
    int j=0;
    vector<int>inter;
    for(int i=0;i<n1;i++)
    {
        if(arr1[i] == arr2[j])
    {
        inter.push_back(arr1[i]);
        j++;
    }
   
    }
   for(auto it:inter)
   {
       cout<<it;
   }
    return 0;
}