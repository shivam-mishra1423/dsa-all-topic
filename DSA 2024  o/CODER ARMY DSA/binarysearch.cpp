#include<iostream>
using namespace std;
int main(){
int arr[5]={4,7,8,9,3};
int start=0;
int end=4;
int key=9;

for(int i=0;i<5;i++){
    int mid=(start+end)/2;// note : ye mid condition loop k under ye lgte h
    if(arr[mid]==key){
        cout<<i;
        break;
    }
    else if(arr[mid]<key){
        start=mid+1; //move right side
    }
    else{
          end=mid-1;//move left side
    }
}

return 0;
}
