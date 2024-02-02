#include<iostream>
#include<vector>
using namespace std;
vector<int> reverseVector(vector<int>& v) {
    int s = 0;
    int e = v.size() - 1;
    while (s < e) {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;
    while (i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        i--;
        j--;
    }
    // first case (1st array is greater)
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    //Second case(2nd array is greater)
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    //third case (both are same & carry remaining)
    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverseVector(ans);
}

int main() {
    vector<int> a = {9, 2, 4, 7};
    vector<int> b = {4, 5, 8};

    vector<int> result = findArraySum(a, a.size(), b, b.size());

    // Print the result
    for (int num : result) {
        cout << num << " ";                
    }

    return 0;
}



//O/P:
// 9 2 4 7
//   4 5 8
// ________
// 9 7 0 5