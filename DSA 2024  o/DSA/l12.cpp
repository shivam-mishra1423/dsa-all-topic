#include<iostream>
using namespace std;
int binary(int arr[],int size,int key){
    int s=0, e=size-1;
    int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid]==key){
        return mid;
    }
    if(key > arr[mid]){
        s=mid+1;
    }
    else if(key<arr[mid]){
        e=mid-1;
    }
    int mid=s+(e-s)/2;
}
return -1;
}
int main(){
int even[6]={1,2,3,4,5,6};
int index =binary(even,6,5);
}
