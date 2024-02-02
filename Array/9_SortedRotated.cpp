#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>&nums){
    int n=nums.size();
    int count = 0;
    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[n-1]>nums[n]){
        count++;
    }
    if(count<=1){
        return true;
    }
    return false;
}
int main()
{
    vector<int> arr = {2, 3, 5, 4,1};     //SortedRotatedelement: 0
    // vector<int> arr = {3, 4, 5,1,2};   SortedRotatedelement: 1
    int sortedrotated = check(arr);

    cout << "SortedRotatedelement: " << sortedrotated << endl;     //Duplicate element: 3
   return 0;
}