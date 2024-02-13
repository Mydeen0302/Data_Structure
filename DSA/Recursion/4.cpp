#include <bits/stdc++.h>
using namespace std;

void revarr(int l, int r, int arr[]) {
    if (l >= r) {
        return;
    } else {
        swap(arr[l], arr[r]);
        revarr(l + 1, r - 1, arr);
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    revarr(0, n - 1, arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
