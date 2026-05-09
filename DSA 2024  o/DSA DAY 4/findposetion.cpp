//leet code q 35
//find the correct position of the given sorted array
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,3,4,5,6};
    int start=0;
    int end=5;
    int key =1;
    int mid, ans=5;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
    }
    cout<<"the correct position is "<<ans;
}
