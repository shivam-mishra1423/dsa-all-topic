#include<iostream>
using namespace std;
int lower(int arr[],int n,int x){
    int lb=-1;
int start=0;
int end=n-1;
for(int i=0;i<n-1;i++){
    int mid=(start+end)/2;
    if(arr[mid]>x){
        lb=mid;
    }
    else if(arr[mid]>x){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
}
return lb;

}
int main()
{
    int arr[]={1,2,3,3,7,8,9,9,9,11};
    int n=10;
    int x=9;
    cout<<lower(arr,n,x);

}
