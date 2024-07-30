#include<bits/stdc++.h>
using namespace std;
int linearsearch(vector<int>arr,int elem,int count)
{
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==elem)
        {
   return linearsearch(arr,arr[i]+1,count+1);
        }
    }
            return count;
    
    
}
int consseqbrute(vector<int>arr)
{int max=1;
for(int i=0;i<arr.size();i++)
{
    int count=linearsearch(arr,arr[i]+1,1);
if(count>max)
{
    max=count;
}
}

    return max;
}int conseqbet(vector<int>arr)
{sort(arr.begin(),arr.end());
    int max=-1;
    int curlen=1;int lastelem=arr[0];
    for(int i=1;i<arr.size();i++)
    {
       
if(arr[i]-1 == lastelem)
{
    lastelem=arr[i];
    curlen++;
}
else{
    lastelem=arr[i];
    curlen=1;
}
if(curlen>max)
{
    max=curlen;
}
    }
    return max;
}
int main()
{
  vector<int>arr={1,2,3,103,102,101,104,105};
 //int max= consseqbrute(arr);
int max=conseqbet(arr);
cout<<max;
    return 0;
}