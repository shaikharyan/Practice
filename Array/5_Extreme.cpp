#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int n=7;
    int start=0;
    int end=n-1;
    while(start<=end){
        if(start==end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
   return 0;
}

//O/P:10 70 20 60 30 50 40