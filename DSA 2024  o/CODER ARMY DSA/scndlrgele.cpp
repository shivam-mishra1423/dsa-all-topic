#include<iostream>
using namespace std;
int main()
{
    int arr[6]={2,4,5,6,4};
    int max=arr[0];
    int sec_lrg=0;
    for(int i=0;i<6;i++){
        if(arr[1]>max){
            max=i;
        }
    }
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            sec_lrg=arr[i];
        }
    }
    cout<<sec_lrg<<endl;
}
