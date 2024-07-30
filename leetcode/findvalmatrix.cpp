#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findvalmatrix(vector<int>rowsum,vector<int>colsum)
{
int n=rowsum.size();
int m=colsum.size();
int i=0,j=0;
vector<vector<int>> ans(n, vector<int>(m, 0));
while(i<n && j<m)
{
 if(i>=n)i=0;
 if(j>=m)j=0;
 ans[i][j]=min(rowsum[i],colsum[j]);
 rowsum[i] -=ans[i][j];
 colsum[j] -= ans[i][j];
 if(rowsum[i] == 0)i++; 
 else j++;  
}
return ans;

}

int main() {
    vector<int> rowsum = {5,7,10};
    vector<int> colsum = {8,6,8};
    vector<vector<int>> ans = findvalmatrix(rowsum, colsum);

    for (const auto &row : ans) {
        cout << "[";
        for (int i = 0; i < row.size(); ++i) {
            if (i > 0) cout << ", ";
            cout << row[i];
        }
        cout << "]" << endl;
    }

    return 0;
}