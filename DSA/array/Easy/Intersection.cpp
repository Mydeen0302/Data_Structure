#include<bits/stdc++.h>
using namespace std;

vector<int> interOpt(vector<int> arr1, vector<int> arr2) {
    int n2 = arr2.size();
    int n1 = arr1.size();

    vector<int> inter;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] == arr2[j] ) {
            inter.push_back(arr1[i]);

            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return inter; // Return intersection after all elements are checked
}

int main() {
    vector<int> arr1 = {1, 2, 3, 3, 4};
    vector<int> arr2 = {1, 3,3, 5};
    vector<int> res = interOpt(arr1, arr2);

    cout << "Intersection: ";
    for (auto it : res) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
