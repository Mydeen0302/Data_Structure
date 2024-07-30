#include<bits/stdc++.h>
using namespace std;
int findbooks(vector<int>arr,int j)
{
    int student =1;
    int pages=0;
    for(int i=0;i<arr.size();i++)
    {
        if(pages+arr[i] <= j)
        {
            pages+=arr[i];
          
        }
        else{
            pages=arr[i];
            student++;
        }
    }
    return student;
}
int allocate(vector<int>arr,int student)
{
    auto max_it = std::max_element(arr.begin(),arr.end());
  int max= *max_it;  
  int sum =accumulate(arr.begin(),arr.end(),0);
  for(int i=max;i<sum;i++)
  {
    int countbooks=findbooks(arr,i);
    if(countbooks == student)
    {
        return i;
    }
  }
}

int allocatebs(vector<int>arr,int student)
{
    auto max_it = std::max_element(arr.begin(),arr.end());
  int low= *max_it;  
  int high =accumulate(arr.begin(),arr.end(),0);
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(findbooks(arr,mid) >student)
    {
low=mid+1;
    }
    else{
        high=mid-1;
    }
  }

  return low;
}
int main()
{   vector<int>arr={25,46,28,49,24};
int student =4;
//int ans=allocate(arr,student);
int ans =allocatebs(arr,student);
cout<<ans;
    return 0;
}