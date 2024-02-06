#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>arr){
    int ans=0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter Elements"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    int unique=findUnique(arr);
    cout<<unique<<endl;
   return 0;
}


//I/P:1 1 2 2 3
//O/P:3