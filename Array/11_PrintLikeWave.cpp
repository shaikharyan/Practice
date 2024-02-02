#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
    vector<int> ans;
    for (int col = 0; col < mCols; col++) {
        if (col & 1) {
            // odd Index => Bottom to top
            for (int row = nRows - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else {
            // 0 or even index => top to bottom
            for (int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int nRows = 3;
    int mCols = 3;

    vector<int> result = wavePrint(arr, nRows, mCols);

    // Print the result
    for (int num : result) {
        cout << num << " ";                //1 4 7 8 5 2 3 6 9 
    }

    return 0;
}