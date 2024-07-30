#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr1, vector<int>& arr2)

{int i=0,j=0,index=0;

int n=arr1.size();
int m=arr2.size();
vector<int>arr3(n+m);
while(i<n && j< m)
{
    if(arr1[i]<arr2[j])
    {
    arr3[index]=arr1[i];
    index++;
    i++;
    }
    else{
         arr3[index]=arr2[j];
        index++;
        j++;
    }
}
while(i<n)
{
    arr3[index]=arr1[i];
    i++;
    index++;
}
while(j<m)
{
    arr3[index]=arr2[j];
    j++;
    index++;
}
 for (int i = 0; i < n + m; i++) {
        if (i < n) arr1[i] = arr3[i];
        else arr2[i - n] = arr3[i];
    }   
}
void merge2(vector<int>& arr1, vector<int>& arr2)
{
int n=arr1.size();
int m=arr2.size();
int i=n-1,j=0;
while(i>=0 && j<m)
{
    if(arr1[i]>arr2[j])
    {
    swap(arr1[i],arr2[j]);
    i--;
    j++;
    }
    else{
        break;
    }
}
sort(arr1.begin(),arr1.end());
sort(arr2.begin(),arr2.end());
}
int main()
{
    vector<int>arr1 ={1,4,8,10};
    vector<int>arr2={2,3,9};
    //  merge(arr1,arr2);
    merge2(arr1,arr2);
      for(auto it:arr1)
      {
        cout<<it<<',';
      }
      cout<<endl;
      for(auto it:arr2)
      {
        cout<<it<<',';
      }
    return 0;
}