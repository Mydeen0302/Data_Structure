
#include<bits\stdc++.h>
using namespace std;
   void merge(vector<int>&arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
vector<int>temp;
    while(left<=mid && right<=high)
    {
if(arr[left]<=arr[right])
{
temp.push_back(left);
left++;
}

else{
    temp.push_back(right);
right++;
}
    }

    while(left<=mid)
{
 temp.push_back(left);
left++;   
}
while(right<=high)
{
  temp.push_back(right);
right++;
}
for(int i=low;i<=high;i++)
{
    arr[i]=temp[i-low];
}
}
   
    void mS(vector<int>&arr,int low,int high)
    {
    if(low>=high)
        {
            return;
        }
        
            int mid=(low+high)/2;
            mS(arr,low,mid);
            mS(arr,mid+1,high);
            merge(arr,low,mid,high);
    }
void  mergeSort(vector<int>&arr,int n)
{
mS(arr,0,n-1);
    
}



int main() {
    vector<int> arr = {1, 9, 2, 8, 3, 4, 7, 5, 6, 4};
    int n = 10;

    mergeSort(arr,n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}