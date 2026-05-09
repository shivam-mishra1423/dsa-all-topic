#include<iostream>
using namespace std;
int main(){
int arr[5]={2,4,5,6,8};
int first=0;
int max=arr[0];
int second=0;
//for(first largest
for(int i=0;i<5;i++){
    for(int j=i;j<=i++;j++){
        if(arr[j]>arr[j+1]){
            first=arr[j];
        }
    }


//for second largest
for(int i=0;i<5;i++){
    for(int j=i;j<=i++;j++){
        if(arr[j]>second){
            second=arr[j];
        }
    }
}

cout<<first<<endl;
cout<<second<<endl;
}
}
