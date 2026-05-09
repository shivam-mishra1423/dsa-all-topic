#include<iostream>
using namespace std;
void print(int arr[],int start, int end){
if(start==end){

    return;
}
for(int i=0;i<5;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
print(arr,start+1,end);
}
int main()
{

    int arr[5];
    cout<<"enter teh element "<<endl;

    for(int i=0;i<5;i++){
        cout<<"enter the "<<i<<"index element"<<endl;
        cin>>arr[i];
    }

    int start=0;
    int end=4;
    cout<<"all entered element "<<endl;
   print(arr,start,end);
}
