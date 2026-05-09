//sum of n number using recursion
#include<iostream>
using namespace std;
void f(int i,int arr[],int n){
//base case
if(i >= n/2){
    return;
}
swap(arr[i],arr[n-i-1]);
f(i+1,arr,n);

}
int main()
{
  int n;
  cout<<"enter the size of the array "<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter array element "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  f(0,arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
