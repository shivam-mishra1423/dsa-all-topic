#include<iostream>
using namespace std;
void printsum(int arr[][4],int n, int m){
    cout<<"the sum is "<<endl;
for(int i =0;i<n;i++){
        int sum=0;
    for(int j=0;j<m;j++){
        sum = sum + arr[i][j];
    }
cout<<sum <<endl;
}
}
int main()
{
    int arr[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    //printting the arraay
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
}



    printsum(arr , 3 ,4);

}
