#include<iostream>
using namespace std;
int main()
{
    int arr[2][4];
    cout<<"enter the element "<<endl;
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"printing the array "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j];
        }
        cout<<sum<<endl;
        cout<<endl;
    }
}
