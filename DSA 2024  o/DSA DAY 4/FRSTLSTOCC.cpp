#include<iostream>
using namespace std;
int main(){

int arr[5]={2,4,6,6,8};
int start=0 ,end=4 ,first=-1,last=-1,mid;
int key=6;

// first occurance
while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]==key){
        start=mid;
        end=mid-1;
    }
    else if(arr[mid]<key)
        start=mid+1;
    else
        end=mid-1;
}



//last ocurance
start=0;end=4;
while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]==key){
        last=mid;
        start=mid+1;
    }
    else if(arr[mid]<key){
       start=mid+1;

    }
    else{
        end=mid-1;
    }

cout<<"first index " <<first<<endl;
cout<<"last index " <<end<<endl;

}
return 0;
}
