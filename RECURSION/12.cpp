//linear seacrh
#include<iostream>
using namespace std;
int linear(int arr[],int index,int n,int k){
//base case
if(index==n){
    return 0;
}
if(arr[index]==k){
    return index;
}
else{
    linear(arr,index+1,n,k);
}
}
int main()
{
    int arr[]={1,2,3,4,5};
    int index=0;
    int n=5;
    int k=4;
    int ans = linear(arr,index,n,k);
    cout<<ans<<endl;
}
