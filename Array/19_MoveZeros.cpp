#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonzero = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[nonzero]);
            nonzero++;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 0, 6, 0, 7};

    moveZeroes(arr);

    // Print the array after moving zeroes to the end
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";  // 1 2 3 4 5 6 7 0 0
    }
    cout << endl;

    return 0;
}
