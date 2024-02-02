#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int size=7;
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";      //70 60 50 40 30 20 10 
    }
    
   return 0;
}