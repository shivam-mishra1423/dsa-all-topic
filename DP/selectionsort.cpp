#include<iostream>
using namespace std;
void shorting(int arr[],int n){

for(int i=0;i<n-1;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            minindex=j;
        }
        swap(arr[i],arr[minindex]);
    }
}

}

void print(int arr[],int n){

for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
}

}
int main()
{
    int arr[]={5,6,3,2,1};


    int n=5;
    shorting(arr,n);

    print(arr,n);
}
