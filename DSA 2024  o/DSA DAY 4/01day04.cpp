//FIND THE FIRST AND LAST OCCURANCE
#include<iostream>
using namespace std;
int main(){

int arr[7]={2,3,4,6,7,7,9};
int target=9;
int start=0 , end=6;
int fstocc=-1 , lastocc=-1;
for(int i=0;i<7;i++){
int mid=(start+end)/2;
if(arr[mid]==target){
    if(arr[mid]==target){
        fstocc=mid;
        end=mid-1;
    }
    else if(arr[mid]<target){
        start=mid+1;
        lastocc=start;
    }
    else{
        end=mid-1;
    }
}
}
cout<<fstocc<<endl;
cout<<lastocc<<endl;
return 0;
}
