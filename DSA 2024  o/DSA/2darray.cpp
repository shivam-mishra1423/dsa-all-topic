#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];

    //taking input from user  row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }


    //printing output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j];
        }
        cout<<" "<<endl;
    }
}
