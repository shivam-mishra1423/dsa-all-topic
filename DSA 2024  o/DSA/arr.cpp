#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target,int n, int m){
for(int i=0;i<n;i++){
    for(int j =0 ;j<m; j++){
        if(arr[n][m]==target){
            return 1;
        }
    }
    return 0;
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
    int target;
    cout<<"enter the searching element "<<endl;
    cin>>target;
  //checking the array in element is present or not
  if(ispresent(arr,target,3,4)){
    cout<<"element is found "<<endl;
  }
  else{
    cout<<"element is not found "<<endl;
  }
}
