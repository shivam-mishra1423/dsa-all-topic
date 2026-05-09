#include<iostream>
int main(){
    int peek=0;
int arr[5]={1,2,5,2,1};

for(int i=0;i<5;i++){
        for(int j=i;i>0;j--){
    if(arr[j]<arr[+1]){
        peek=j;
}
        }
}
 cout<<peek;
}
