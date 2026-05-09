#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int>&arr){
int s=0;
int e=arr.size() - 1;
int mid = s + (e-s)/2;
while(s<e){
    if(arr[mid]<arr[mid+1]){
        s=mid + 1;
    }
    else{
        e = mid;
    }
    mid = s + (e-s)/2;
}
return s;
}
int main()
{
   int arr[]={1,3,0};
    cout<<peak(arr,3);
}
