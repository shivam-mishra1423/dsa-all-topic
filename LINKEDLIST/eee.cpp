#include<iostream>
using namespace std;
int ls(int arr[], int i,int n, int t){
if(i==n){
    return 0;
}
if(arr[i]==t){
    return 1;
}
  ls(arr,i+1,n,t);
}
int main()
{
    int arr[]={1,2,3,4,5};

    int i=0;
    int n=5;
    int t=3;
    int ans=ls(arr,i,n,t);
    cout<<ans;
}
