//binary search
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,4,7,8,9};
    int start=0;
    int end=4;
    int key=8;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(start>end){
            break;
        }
        mid++;
    }
    return 0;
}
