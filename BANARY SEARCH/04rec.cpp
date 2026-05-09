//using recursion binary search
#include<iostream>
using namespace std;
int binarysearch(int arr[],int start,int end,int key){
//base case
if(start>end){
    return -1;
}
int mid=(start+end)/2;
if(arr[mid]==key){
    return mid;
}
else if(arr[mid]>key){//if mid is grater
    binarysearch(arr,start,mid-1,key);//recursive call this line also call again
}
else{//if mid is smaller than key
    binarysearch(arr,mid+1,end,key);//recursive call this line call again again
}

}
int main(){
    int n;
    cout<<"enter the size of the vector"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the i the sorted order element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the searching element "<<endl;
    cin>>key;

    int start=0;
    int end=n;
    int index=binarysearch(arr,start,end,key);
    cout<<"the element found in the index no "<<index<<endl;

}
