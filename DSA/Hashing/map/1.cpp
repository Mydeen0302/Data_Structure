#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,4,5,1};
    map<int,int>mpp;
    for(int i=0;i<sizeof(a) / sizeof(a[0]);i++)
    {
mpp[a[i]]++;  //map<a[i], val++> 
    }
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
int q;
cout<<"enter how many element that you want to search"<<endl;
cin>>q;
while (q--)
{int n;
cout<<"enter the number"<<endl;
cin>>n;
cout<<mpp[n]<<endl;
    /* code */
}


    return 0;
}