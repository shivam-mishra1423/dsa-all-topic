#include<iostream>
using namespace std;
void colsum(int arr[3][4],int row , int col){
    cout<<"printing the sum " <<endl;
for(int row=0;row<3;row++){
        int sum=0;
    for(int col=0;col<4;col++){
       sum=sum + arr[row][col];
    }
    cout<<sum;
}
}
int main()
{
    int arr[3][4];

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }

    //printing the array;
    for(int row =0;row<4;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<endl;
        }
cout<<endl;
    }

    colsum(arr,3,4);

}
