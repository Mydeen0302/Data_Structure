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
void revarr2(int i,int n,int arr[])
{
    if(i>=n/2){
        return ;
    }
    else{
        swap(arr[i],arr[n-i-1]);
        revarr2(i+1,n,arr);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    revarr(0, n - 1, arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    revarr2(0,n,arr);
      for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
