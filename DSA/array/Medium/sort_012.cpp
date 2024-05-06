#include<bits/stdc++.h>
using namespace std;

void sortbrute(vector<int>& arr) {
    int n = arr.size();
    int c0 = 0, c1 = 0, c2 = 0;
    for (auto it : arr) {
        if (it == 0) {
            c0++;
        } else if (it == 1) {
            c1++;
        } else if (it == 2) {
            c2++;
        }
    }
    for (int i = 0; i < c0; i++) {
        arr[i] = 0;
    }
    for (int i = c0; i < c0 + c1; i++) { // Start from c0
        arr[i] = 1;
    }
    for (int i = c0 + c1; i < n; i++) { // Start from c0 + c1
        arr[i] = 2;
    }
}
void sortopt(vector<int>&arr)
{
    int n=arr.size();
int low=0,mid=0,high=n-1;
while(mid<=high)
{
    if(arr[mid]==0)
    {
swap(arr[low],arr[mid]);
mid++;low++;
    }
    else if(arr[mid]==1)
    {
mid++;
    }
    else if(arr[mid] ==2)
    {
swap(arr[mid],arr[high]);
high--;
    }
}
}
int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2};
    //sortbrute(arr);
    sortopt(arr);
    for (auto it : arr) {
        cout << it;
    }
    return 0;
}
