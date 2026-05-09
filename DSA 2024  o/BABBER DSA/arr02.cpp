#include<iostream>
using namespace std;
void printarr(int arr[],int n){
//printing the array element
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
cout<<"printing the array" <<endl;
}
int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printarr(arr,10);

    string name[10]="shivam";
    printarr(name,10);

    int forth[10]={0};
    printarr(forth,10);

    int fifth[10]={1};
    printarr(fifth,10);



}
