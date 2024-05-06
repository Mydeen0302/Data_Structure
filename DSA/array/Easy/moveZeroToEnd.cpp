#include<bits\stdc++.h>
using namespace std;
int moveZeroBrute(vector<int>&arr,int n)
{
    vector<int>temp;
    for(auto it:arr)
    {
if(it != 0)
{
    temp.push_back(it);
}
    }
 
int t=temp.size();
    for(int i=0;i<t;i++)
    {
        arr[i]=temp[i];
    }
    int k=n-t;
    for(int i=t;i<n;i++)
    {
        arr[i]=0;
    }

    }
    vector<int> moveZeroOpt(vector<int>arr,int n)
    {
        int j;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] == 0)
            {
j=i;
break;
            }
        }
        for(int i=j+1;i<n;i++)
    {
        if(arr[j] != arr[i])
        {
            swap(arr[j],arr[i]);
            j++;
        }
    }
   return arr;
   
    }

int main()
{
    vector<int>arr={1,0,1,2,0,3,0,4,5,0};
    int n=arr.size();
    //moveZeroBrute(arr,n);
    arr=moveZeroOpt(arr,n);
    for(auto it:arr)
    {
        cout<<it;
    }
    return 0;

}