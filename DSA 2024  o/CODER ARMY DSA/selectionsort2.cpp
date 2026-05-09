#include<iostream>
using namespace std;
int main(){

int arr[100];
int n;
cout<<"enter the size of the array  size is (1 -- 100 )" <<endl;
cin>>n;//size of array
cout<<"enter the element of the array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    int index=i;
    for(int j=i+1;j<n;j++){//start searching
        if(arr[j]<arr[index])
        index=j;
    }
    swap(arr[i],arr[index]);
}
for(int i=0; i<n;i++){
    cout<<arr[i]<<" "<<endl;
}
}
