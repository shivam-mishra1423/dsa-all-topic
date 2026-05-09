#include<iostream>
using namespace std;
void check(int arr[]){
for(int i=0;i<5;i++){
    for(int j=0;j<5-i;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
}

int main()
{
   int arr[]={1,3,7,11,13};
   check(arr);
}
