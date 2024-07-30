#include<bits/stdc++.h>
using namespace std;
int reversepair(vector<int>arr)
{
int n=arr.size();
int pair=0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>2*arr[j])
        {
            pair++;
        }
    }
}
return pair;
}

int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //Modification 1: cnt variable to count the pairs:
    int cnt = 0;

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); //Modification 2
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt; // Modification 3
}
int countpairs(vector<int>arr,int low,int mid,int high)
{
    int right=mid+1;
    int cnt=0;
    for(int i=low;i<=mid;i++)
    {
        while(right<=high  && arr[i]> 2 * arr[right]) right++;
        cnt+=(right -(mid+1));
    }
    return cnt;
}
int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += countpairs(arr,low,mid,high);
    merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}

int reversepairopt(vector<int>&a) {
int n=a.size();
    // Count the number of pairs:
    return mergeSort(a, 0, n - 1);
}

int main()
{
    vector<int>arr={1,3,2,3,1};
   // int ans=reversepair(arr);
   int ans=reversepairopt(arr);
    cout<<ans;
    return 0;
}