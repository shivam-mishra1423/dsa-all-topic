//find the largest element in the array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int larg=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>larg){
            larg=arr[i];
        }
    }
    cout<<larg<<endl;
}
