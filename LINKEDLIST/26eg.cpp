#include<iostream>
using namespace std;
int main()
{
   int arr[]={1,4,5,6,5};


   for(int i=0;i<5;i++){
        int min_index=1;
    for(int j=i+1;j<4;j++){
        if(arr[i]<arr[min_index]){
            swap(arr[i],arr[j]);
        }
    }
   }
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }
}
