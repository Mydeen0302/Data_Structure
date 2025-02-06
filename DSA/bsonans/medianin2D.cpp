#include<bits/stdc++.h>
using namespace std;
int median(vector<vector<int>>matrix,int m , int  n)
{
    vector<int>arr3;
for(auto it:matrix)
{
    for(auto nums :it)
    {
        arr3.push_back(nums);
    }
}
sort(arr3.begin(),arr3.end());
int size=arr3.size();
return arr3[size/2];
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {8, 9, 11, 12, 13},
        {21, 23, 25, 27, 29}
    };
    int m = matrix.size(), n = matrix[0].size();
    int ans = median(matrix, m, n);
    cout << "The median element is: " << ans << endl;
    return 0;
}