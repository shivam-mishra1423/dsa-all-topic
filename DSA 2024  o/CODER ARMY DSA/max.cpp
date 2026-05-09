#include<iostream>
using namespace std;
int main(){


int n;
cout<<"enter the size of the array (0-100)" <<endl;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxi=arr[0];

int third;
for(int i=0;i<n;i++){
    if(arr[i]>maxi){
        maxi=arr[i];
    }
}
int sec=maxi;
//second maximum element in the array
    for(int i=0;i<n;i++){
        if(arr[i]>sec){
             sec=arr[i];

    }

}
cout<<"the first largest element in the array " <<maxi<<endl;
cout<<"the second largest element in the array " <<sec<<endl;



}
