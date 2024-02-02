#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int even[8]={5,10,15,20,25,30,35,40};
    int odd[5]={1,2,4,6,8};

    swapAlternate(even,8);
    printArray(even,8);      //10 5 20 15 30 25 40 35 
    cout<<endl;

    swapAlternate(odd,5);
    printArray(odd,5);      //2 1 6 4 8 
    cout<<endl;
   return 0;
}