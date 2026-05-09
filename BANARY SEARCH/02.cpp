//binary search
#include<iostream>
using namespace std;
int binary(int arr[],int n,int k){
int start=arr[0];
int end=arr[n-1];
for(int i=0;i<n;i++){
   int  mid=(start+end)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        end=mid-1;
    }
    else if(arr[mid]<k){
        start=mid+1;
    }

}
return -1;

}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
   cout<< binary(arr,n,12);
}
