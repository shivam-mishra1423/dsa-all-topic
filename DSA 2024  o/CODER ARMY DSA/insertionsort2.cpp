#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array" <<endl;
    cin>>n;
    int arr[100];


    //taking the input in the array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//outer loop
for(int i=1;i<n;i++){
    for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1]){//compare to 1 index to 0 index
            swap(arr[j],arr[j-1]);
        }
        else{//if left side are all ready sorted then we exit into the loop
            break;
        }
    }
}
cout<<"printing the array " <<endl;
for(int i=0;i<n;i++){
    cout<<arr[i] <<" ";
}
}
