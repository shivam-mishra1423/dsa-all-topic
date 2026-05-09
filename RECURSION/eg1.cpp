#include<iostream>
using namespace std;
void print(int arr[],int start, int end){
    if(start==end){
        return;
    }

    print(arr,start+1,end);
    cout<<arr[start]<<" ";
}
int main()
{
    int arr[]={1,2,3,4,5};
    int start=0;
    int end=5;
    print(arr,start,end);
}
