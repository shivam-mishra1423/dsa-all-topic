#include<iostream>
using namespace std;
void printarray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}

void swaparray(int arr[],int size){
for(int indx=0;indx<size;indx+=2){
    if(indx+1<size){
        swap(arr[indx],arr[indx+1]);
    }
}
}
int main()
{
    int odd[]={1,3,5,7,9};
    int even[]={2,4,6,8};

    swaparray(odd,5);
    printarray(odd,5);
}
