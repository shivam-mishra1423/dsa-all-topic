//floor and ceil

#include<iostream>
using namespace std;
int search(int arr[],int x,int n){
int ans=-1;
int start=0;
int end=n-1;
while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]<=mid){
        ans=arr[mid];
        start=mid+1;//move right side
    }
    else{
            end=mid+1;//move at left
    }
}
return ans;


}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int x=5;
    int n=6;
    cout<<search(arr,x,n);

}
