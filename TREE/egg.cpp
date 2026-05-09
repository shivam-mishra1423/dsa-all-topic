#include<iostream>
using namespace std;
int target(int arr[],int n,int key){
int start=0;
int end=n-1;
for(int i=0;i<n;i++){
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return i;
    }
    else if(arr[mid]>key){
        mid=end-1;
    }
    else{
        start=mid+1;
    }
}
return 0;

}
int main()
{
    int arr[]={1,2,3,4,5};
   cout<<target(arr,5,4);

}
