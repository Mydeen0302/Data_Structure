#include <bits/stdc++.h>
using namespace std;

int findSmallestgreaterOrEqual(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;


    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
           
            low = mid + 1; 
        } else {
            high = mid-1;  
           
        }
    }
    return arr[high+1];
}

int main() {
    vector<int> arr = {3,5,8,9,15,19};
    int k = 9;

    try {
        cout << findSmallestgreaterOrEqual(arr, k) << endl;
    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    }

    return 0;
}
