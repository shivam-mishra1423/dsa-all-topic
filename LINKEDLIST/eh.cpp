#include<iostream>
using namespace std;
int bs(int arr[], int st, int ed, int x){


if(start>end){
    return 0;///means element present nhi hai
}

int mid=st+ed/2;
if(arr[mid]==x){
    return mid;
}

if(arr[mid]>target){
   return bs(arr,st,mid-1,x);
}
else{
   return bs(arr,mid+1,ed,x);
}
}
int main()
{
    int arr[]={1,2,3,4,5};

    int i=0;
    int end=5;
    int ans=ls(arr,i,end,4);
    cout<<ans;
}
