#include<bits/stdc++.h>
using namespace std;
int QS(vector<int>&arr,int low ,int high)
{
int i=low;
int j=high;
int pivot = arr[low];
while(i<j)
{
    while(arr[i]<=pivot && i<=high-1){
        i++;    }

while(arr[j]>pivot && j>=low)
{
    j--;
}
if(i<j)
{swap(arr[i],arr[j]);}
}
swap(arr[j],arr[low]);
return  j;
}
void QuickSort(vector<int>&arr,int low,int high)
{
    if(low<high)
    {int partition = QS(arr,low,high);
QuickSort(arr,low,partition-1);
QuickSort(arr,partition+1,high);}

}
int main()
{
   vector<int>arr ={4,6,2,5,7,9,1,3};
   QuickSort(arr,0,arr.size()-1);
    for(auto  it:arr)
    {
        cout<<it;
    }
    return 0;
}