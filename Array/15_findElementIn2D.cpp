#include<iostream>
using namespace std;

int findKey(int arr[][3],int rows,int cols,int key){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j]==key) return i;
        }
    }
    return -1;
}

int main()
{
    int arr[3][3];
    int rows=3;
    int cols=3;
    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"printing rowwise"<<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;   
    }

    cout<<findKey(arr,3,3,12);
   return 0;
}

// I/P:1 2 3 4 5 12 7 8 9
// printing rowwise

// 1 2 3
// 4 5 12
// 7 8 9
//O/P:
// 1

//Method 2->If return an index
// void findKey(int arr[][3], int rows, int cols, int key, int &rowIndex, int &colIndex) {
//     rowIndex = -1;
//     colIndex = -1;

//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             if (arr[i][j] == key) {
//                 rowIndex = i;
//                 colIndex = j;
//                 return;
//             }
//         }
//     }
// }

// int main() {
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     // Input array elements
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     // Print the array row-wise
//     cout << "Printing row-wise" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int keyToFind = 12;
//     int rowIndex, colIndex;

//     findKey(arr, rows, cols, keyToFind, rowIndex, colIndex);

//     if (rowIndex != -1 && colIndex != -1) {
//         cout << "Key found at Row: " << rowIndex << ", Column: " << colIndex << endl;
//     } else {
//         cout << "Key not found" << endl;
//     }

//     return 0;
// }


//I/P: 1 2 3 4 12 6 7 8 9
// Printing row-wise
//O/P:
// 1 2 3
// 4 12 6
// 7 8 9
// Key found at Row: 1, Column: 1