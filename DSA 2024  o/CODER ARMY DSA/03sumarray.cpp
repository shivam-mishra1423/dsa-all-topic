//sum of the array given by the user
#include<iostream>
using namespace std;
void sum(int arr[],int n){
int sum=0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
cout<<"the sum is "<<sum<<endl;
}
int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[15];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 /*
      int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"the sum of the array is " <<sum<<endl;
    */
    sum(arr,n);


}
