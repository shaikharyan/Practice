#include<iostream>
using namespace std;

void transpose(int arr[][3], int rows, int cols, int transposeArr[][3]){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][3], int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;  // Print a new line after each row
    }
}

int main() {
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // Input array elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Original Array:" << endl;
    printArray(arr, rows, cols);

    cout << "Starting Transpose" << endl;
    int transposeArr[3][3];
    transpose(arr, rows, cols, transposeArr);

    cout << "Printing Transposed Array:" << endl;
    printArray(transposeArr, cols, rows);

    return 0;
}


// 1 2 3 4 5 6 7 8 9
// Original Array:
// 1 2 3
// 4 5 6 
// 7 8 9
// Starting Transpose
// Printing Transposed Array:
// 1 4 7 
// 2 5 8 
// 3 6 9