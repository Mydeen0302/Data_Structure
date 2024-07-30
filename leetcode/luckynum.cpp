#include <iostream>
#include <vector>
#include <set>
#include <climits> // For INT_MAX and INT_MIN

using namespace std;

vector<int> luckyNumbers(vector<vector<int>>& matrix) {
    set<int> minSet;
    vector<int> lnum;

    // Find the minimum element in each row and insert into the set
    for (int i = 0; i < matrix.size(); i++) {
        int minValue = INT_MAX;
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] < minValue) {
                minValue = matrix[i][j];
            }
        }
        minSet.insert(minValue);
    }
    for (int col = 0; col < matrix[0].size(); col++) {
        int maxValue = INT_MIN;
        for (int row = 0; row < matrix.size(); row++) {
            if (matrix[row][col] > maxValue) {
                maxValue = matrix[row][col];
            }
        }
        if (minSet.find(maxValue) != minSet.end()) {
            lnum.push_back(maxValue);
        }
    }

    return lnum;
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {3, 4, 5},
        {6, 7, 8}
    };

    vector<int> ans = luckyNumbers(arr);
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
