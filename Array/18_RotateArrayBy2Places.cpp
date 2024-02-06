#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    rotate(arr, 2);

    // Print the rotated array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";       //4 5 1 2 3 
    }
    cout << endl;

    return 0;
}
