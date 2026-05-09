//printing the sum of the element in the array using recursion
#include<iostream>
using namespace std;
int print(int arr[],int index,int n){
//base case
if(index==n){
    return 0;
}
else{
    cout<<arr[index]<<" ";
  return arr[index] + print(arr,index+1,n);
}
}
int main()
{
    int a[]={1,2,3,4,5};
    int index=0;
    int n=5;
    int ans = print(a,index,n);
    cout<<endl;
    cout<<ans<<endl;
}

