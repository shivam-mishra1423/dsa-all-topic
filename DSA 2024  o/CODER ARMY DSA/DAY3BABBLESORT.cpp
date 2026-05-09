//babbel sort
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,4,5,6,7};
    for(int i=3;i>=0;i--){
        for(int j=0;i>=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}
