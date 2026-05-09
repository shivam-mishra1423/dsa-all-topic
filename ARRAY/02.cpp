#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"enter the array element "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"printing the array "<<endl;
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }
}
