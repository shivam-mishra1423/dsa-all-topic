//printing the array using recursion
#include<iostream>
using namespace std;
void print(int arr[],int index,int n){
//base case
if(index==n){
    return;
}
else{
    cout<<arr[index]<<" ";
    print(arr,index+1,n);
}
}
int main()
{
    int a[]={1,2,3,4,5};
    int index=0;
    int n=5;
    print(a,index,n);
}
