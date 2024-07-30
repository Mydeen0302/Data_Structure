    #include<bits/stdc++.h>
    using namespace std;
    bool check(vector<int> arr, int divisor, int threshold) {
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ceil((double) arr[i] / (double) divisor);
    }
    return sum <= threshold;
}

int findsmallestdivisor(vector<int> arr, int threshold) {
    int n = arr.size();
    for (int i = 1; i <= *max_element(arr.begin(), arr.end()); i++) {
        if (check(arr, i, threshold)) {
            return i;
        }
    }
    return -1; // In case no valid divisor is found (should not happen for valid inputs)
}
    int main()
    {
        vector<int>arr={1,2,3,4,5};
        int threshold = 8;
        int divisor =  findsmallestdivisor(arr,threshold);
        cout<<divisor;
        return 0;
    }