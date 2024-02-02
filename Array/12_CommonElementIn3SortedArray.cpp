#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3) {
    vector<int> ans;
    set<int> st;
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (A[i] == B[j] && B[j] == C[k]) {
            st.insert(A[i]);
            i++, j++, k++;
        } else if (A[i] < B[j]) {
            i++;
        } else if (B[j] < C[k]) {
            j++;
        } else {
            k++;
        }
    }
    for (auto it : st) {
        ans.push_back(it);
    }
    return ans;
}

int main() {
    int A[] = {1, 2, 2, 3, 4};
    int B[] = {2, 2, 3, 5};
    int C[] = {1, 2, 2, 4, 5};

    int n1 = 5, n2 = 4, n3 = 5;

    vector<int> result = commonElements(A, B, C, n1, n2, n3);

    // Print the result
    for (int num : result) {
        cout << num << " ";             //2
    }
    cout << endl; 

    return 0;
}
