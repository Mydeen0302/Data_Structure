#include <bits/stdc++.h>
using namespace std;

void permutate(vector<int>& ds, vector<vector<int>>& ans, vector<int>& nums, vector<bool>& freq) {
    if (ds.size() == nums.size()) {
        ans.push_back(ds);
        return;
    }
    
    for (int i = 0; i < nums.size(); i++) {
        if (!freq[i]) {
            ds.push_back(nums[i]);
            freq[i] = true;
            permutate(ds, ans, nums, freq);
            freq[i] = false;
            ds.pop_back();
        }
    }
}

int main() {
    vector<int> nums = {1,2,3,4,5};  // Example input
    vector<vector<int>> ans;
    vector<int> ds;
    vector<bool> freq(nums.size(), false);
    vector<int> snums = nums;
    sort(snums.begin(),snums.end());
    permutate(ds, ans, snums, freq);
for(auto it:ans)
{
    for(auto nums:it)

    {
        cout<<nums<<" ";
    }
    cout<<endl;
}
    bool found = false;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == nums) {
            found = true;
            if (i + 1 < ans.size()) {
                for (int j = 0; j < ans[i + 1].size(); j++) {
                    cout << ans[i + 1][j] << " ";
                }
            } else {
                cout << "Given permutation is the last permutation.";
            }
            cout << endl;
            break;
        }
    }

    if (!found) {
        cout << "The vector is not present in the list of permutations." << endl;
    }

    return 0;
}
