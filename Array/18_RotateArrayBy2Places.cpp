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


//CodeNinjas
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    
    // If k is greater than the size of the array, take its modulo
    k = k % n;

    // Create a new vector to store the rotated array
    vector<int> rotatedArray(n);

    // Copy elements from the original array to the rotated array
    for (int i = 0; i < n; ++i) {
        int rotatedIndex = (i + n - k) % n;  // Calculate the new index after rotation
        rotatedArray[rotatedIndex] = arr[i];
    }

    return rotatedArray;
}
