//find the first and last element in the array
//condition array are give in the sorted form
#include<iostream>
using namespace std;
int main(){
    int arr[4]={2,4,6,8};
    int start=0 , end=4 , firstocc=-1 , lastocc=-1 , mid;
    int target = 6;

    //for first occurence
    while(start<=end){
        mid = start + (end - start)/2;
        if(arr[mid]==target){
            firstocc=mid;
            end=mid-1;
            }
            else if(arr[mid]<target){
                start=mid+1;
            }
            else{
                end = mid - 1;
        }
            }

sear



return 0;
}
