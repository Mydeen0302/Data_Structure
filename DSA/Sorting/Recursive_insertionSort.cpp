    #include<bits/stdc++.h>
    using namespace std;
    void insertion_sort(int arr[],int index,int n)
    {
    if(index == n)
    {
        return;
    }
        int j=index;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }

    insertion_sort(arr,index+1 ,n);
    }

    int main() {
    int n;
    cout << "Enter how many elements you want to enter:" << endl;
    cin >> n;
    int a[n];

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    insertion_sort(a, 0, n);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; // Separate elements with spaces
    }

    return 0;
}
