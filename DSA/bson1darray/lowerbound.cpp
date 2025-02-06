#include <bits/stdc++.h>
using namespace std;

int findLargestLesserOrEqual(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int result = -1; // Default result if no valid number is found

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            result = arr[mid]; // Update result with the valid number
            low = mid + 1;     // Look for a larger valid number
        } else {
            high = mid - 1;    // Discard the current element
        }
    }

    if (result != -1) {
        return result; // Largest number <= target
    } else {
        throw out_of_range("No element is lesser than or equal to the target.");
    }
}

int main() {
    vector<int> arr = {8, 10, 11, 12, 19};
    int k = 5;

    try {
        cout << findLargestLesserOrEqual(arr, k) << endl;
    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    }

    return 0;
}
