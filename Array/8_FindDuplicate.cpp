#include<iostream>
#include<vector>
using namespace std;
int findDuplicates(vector<int>& arr) {
    int ans = 0;
    
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 5};
    int duplicate = findDuplicates(arr);

    cout << "Duplicate element: " << duplicate << endl;     //Duplicate element: 3
   return 0;
}