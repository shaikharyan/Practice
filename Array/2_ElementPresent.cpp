//Element Present or not(Linear Search)
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int key=9;
    // bool flag=0;

    //Linear Search
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            // flag=1;
            cout<<i<<endl;
            // break;
        }
    }
    // if(flag){
    //     cout<<"Present"<<endl;
    // }
    // else{
    //     cout<<"Absent"<<endl;
    // }
    
   return 0;
}

//O/P:Present