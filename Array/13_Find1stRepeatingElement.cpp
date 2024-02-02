#include <iostream>
#include <unordered_map>

using namespace std;

int firstRepeated(int arr[], int n) {
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
        if (hash[arr[i]] > 1) {
            return i + 1;  // Returning 1-based index
        }
    }
    return -1;  // Return -1 if no repeated element is found
}


//iterative method
// int firstRepeated(int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (a[i] == a[j]) {
//                 return i + 1; // Returning 1-based index
//             }
//         }
//     }
//     return -1; // Return -1 if no repeated element is found
// }

int main() {
    int arr[] = {3, 1, 4, 2, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = firstRepeated(arr, n);
    //  cout << "First repeated element found at index: " << result << endl;   

    if (result != -1) {
        cout << "First repeated element found at index: " << result << endl;       //First repeated element found at index: 5
    } else {
        cout << "No repeated element found." << endl;
    }

    return 0;
}
