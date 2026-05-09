#include<iostream>
using namespace std;
int checkmin(int arr[],int n){
    int minel=arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]<minel){
        minel=arr[i];
    }
}
cout<<"the min element is"<<minel<<endl;
}

int checkmax(int arr[],int n){
int max=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<"the maximum element is  "<<max<<endl;
}
int main(){

int n;
cout<<"enter the size of the array "<<endl;
cin>>n;

int arr[n];
//taking the input in th array
for(int i=0;i<n;i++){

    cin>>arr[i];
}
checkmin(arr,n);
checkmax(arr,n);

}
