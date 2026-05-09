#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target,int row, int col){
for(int i=0;i<row;i++){
    for(int j =0 ;j<col; j++){
        if(arr[row][col]==target){
            return 1;
        }
    }

}
 return 0;
}
int main()
{
    int arr[3][4];

    for(int i=0;i<3;i++){
          for(int j=0;j<4;j++){
            cin>>arr[i][j];
          }
          cout<<endl;
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
