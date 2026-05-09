#include<iostream>
using namespace std;
int check(int arr[][4],char target,int n, int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==target){
            return 1;
        }
    }

}
return 0;
}
int main()
{
    string arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    //printing the arr
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
}
char target;
cin>>target;
 for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
          if(arr[i][j]==target){
            cout<<"element is found"<<endl;
          }
          else{
            cout<<"not found"<<endl;
          }
        }

}
}

