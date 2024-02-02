//Count o's and 1's
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,0,0,0,1,1,1,0,0,0};
    int size=10;
    int numzero=0;
    int numone=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            numzero++;
        }
        if(arr[i]==1){
            numone++;
        }
    }
    cout<<"count of numzero is "<<numzero<<endl;     //6
    cout<<"count of numone is "<<numone<<endl;       //4
   return 0;
}