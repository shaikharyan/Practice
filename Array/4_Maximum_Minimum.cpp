#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    //Maximum
    // int arr[]={1,2,5,7,9};
    // int n=5;
    // int maxi=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>maxi){
    //         maxi=arr[i];
    //     }
    // }
    // cout<<"Maximum is "<<maxi<<endl;      //9


//Minimum
    int arr[]={1,2,5,7,9};
    int n=5;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<"Minimum is "<<mini<<endl;       //1
   return 0;
}