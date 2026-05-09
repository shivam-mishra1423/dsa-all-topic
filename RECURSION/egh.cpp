#include<iostream>
using namespace std;
int print(int n)
{
    int arr[n];
    int i=0;
    if(n==1){
        return 1;
    }

    arr[i++] = print(n-1);
}
int main()
{
    int n;
    cout<<"enter n "<<endl;
    int arr[n]=print(n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
