//search the element in the rotated sorted array
//note after rotation identityfy both side is sorted or not
#include<iostream>
using namespace std;
int fun(int arr[],int n,int target){
int low=0, high=n-1;

while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
        }
        //left parth is sorted check
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target <= arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{//right part is always sorted after rotation
            if(arr[mid] <=target  && target <=arr[high]){
                low = mid +1;
            }
            else{
                high=mid-1;
            }
        }

}
return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6};

    int n=6;
    int target=5;
    cout<<fun(arr,n,target);
    return 0;
}
