//max and min element int the array
#include<iostream>
using namespace std;
int maxarr(int arr[],int n){
    int max=arr[0];
for(int i=0;i<n;i++){
    if(max>arr[i]){
        arr[i]=max;
        max++;
    }
}
}
int main(){

int arr[10]={2,4,1,3,2,5,12,3,2};
maxarr(arr,10);

}
